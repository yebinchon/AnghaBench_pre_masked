
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int verify; int rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_4 (struct tlsv1_server*,int ,int ) ;
 int FUNC_5 (struct tlsv1_server*,char*,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct tlsv1_server *VAR_6,
            u8 **VAR_7, u8 *VAR_8,
            int VAR_9,
            char *VAR_10,
            size_t VAR_11)
{
 u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16;

 if (!VAR_10) {




  return 0;
 }

 VAR_12 = *VAR_7;
 if (VAR_5 + 1 + 3 + 1 + 3 + VAR_11 >
     (unsigned int) (VAR_8 - VAR_12)) {
  FUNC_4(VAR_6, VAR_2,
       VAR_1);
  return -1;
 }

 FUNC_5(VAR_6, "Send CertificateStatus (multi=%d)", VAR_9);
 VAR_13 = VAR_12;
 VAR_12 += VAR_5;




 VAR_14 = VAR_12;

 *VAR_12++ = VAR_4;

 VAR_15 = VAR_12;
 VAR_12 += 3;
 if (VAR_9)
  *VAR_12++ = 2;
 else
  *VAR_12++ = 1;

 FUNC_0(VAR_12, VAR_11);
 VAR_12 += 3;
 FUNC_1(VAR_12, VAR_10, VAR_11);
 VAR_12 += VAR_11;

 FUNC_0(VAR_15, VAR_12 - VAR_15 - 3);

 if (FUNC_3(&VAR_6->rl, VAR_3,
         VAR_13, VAR_8 - VAR_13, VAR_14, VAR_12 - VAR_14,
         &VAR_16) < 0) {
  FUNC_6(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_4(VAR_6, VAR_2,
       VAR_1);
  return -1;
 }
 VAR_12 = VAR_13 + VAR_16;

 FUNC_2(&VAR_6->verify, VAR_14, VAR_12 - VAR_14);

 *VAR_7 = VAR_12;

 return 0;
}
