
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct mgmt_body_t {int auth_alg; int auth_trans_seq_num; size_t status_code; } ;
typedef int pbody ;
typedef int netdissect_options ;


 void* FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 char** VAR_2 ;
 int FUNC_3 (struct mgmt_body_t*,int ,int) ;
 int FUNC_4 (int *,struct mgmt_body_t*,int const*,int,int) ;
 char** VAR_3 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_4,
            const u_char *VAR_5, u_int VAR_6)
{
 struct mgmt_body_t VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 if (!FUNC_2(*VAR_5, 6))
  return 0;
 if (VAR_6 < 6)
  return 0;
 VAR_7.auth_alg = FUNC_0(VAR_5);
 VAR_8 += 2;
 VAR_6 -= 2;
 VAR_7.auth_trans_seq_num = FUNC_0(VAR_5 + VAR_8);
 VAR_8 += 2;
 VAR_6 -= 2;
 VAR_7.status_code = FUNC_0(VAR_5 + VAR_8);
 VAR_8 += 2;
 VAR_6 -= 2;

 VAR_9 = FUNC_4(VAR_4, &VAR_7, VAR_5, VAR_8, VAR_6);

 if ((VAR_7.auth_alg == 1) &&
     ((VAR_7.auth_trans_seq_num == 2) ||
      (VAR_7.auth_trans_seq_num == 3))) {
  FUNC_1((VAR_4, " (%s)-%x [Challenge Text] %s",
      (VAR_7.auth_alg < VAR_0)
   ? VAR_2[VAR_7.auth_alg]
   : "Reserved",
      VAR_7.auth_trans_seq_num,
      ((VAR_7.auth_trans_seq_num % 2)
          ? ((VAR_7.status_code < VAR_1)
          ? VAR_3[VAR_7.status_code]
          : "n/a") : "")));
  return VAR_9;
 }
 FUNC_1((VAR_4, " (%s)-%x: %s",
     (VAR_7.auth_alg < VAR_0)
  ? VAR_2[VAR_7.auth_alg]
  : "Reserved",
     VAR_7.auth_trans_seq_num,
     (VAR_7.auth_trans_seq_num % 2)
         ? ((VAR_7.status_code < VAR_1)
      ? VAR_3[VAR_7.status_code]
             : "n/a")
         : ""));

 return VAR_9;
}
