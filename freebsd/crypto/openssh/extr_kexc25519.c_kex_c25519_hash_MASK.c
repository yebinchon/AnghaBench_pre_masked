
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,size_t) ;
 scalar_t__ FUNC_1 (int,struct sshbuf*,int *,size_t) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct sshbuf*,int ) ;
 int FUNC_4 (struct sshbuf*) ;
 struct sshbuf* FUNC_5 () ;
 int FUNC_6 (struct sshbuf*,int const*,size_t) ;
 int FUNC_7 (struct sshbuf*,char const*) ;
 int FUNC_8 (struct sshbuf*,int const*,size_t) ;
 int FUNC_9 (struct sshbuf*,size_t) ;
 int FUNC_10 (struct sshbuf*,int ) ;
 int VAR_5 ;

int
FUNC_11(
    int VAR_6,
    const char *VAR_7,
    const char *VAR_8,
    const u_char *VAR_9, size_t VAR_10,
    const u_char *VAR_11, size_t VAR_12,
    const u_char *VAR_13, size_t VAR_14,
    const u_char VAR_15[VAR_0],
    const u_char VAR_16[VAR_0],
    const u_char *VAR_17, size_t VAR_18,
    u_char *VAR_19, size_t *VAR_20)
{
 struct sshbuf *VAR_21;
 int VAR_22;

 if (*VAR_20 < FUNC_2(VAR_6))
  return VAR_3;
 if ((VAR_21 = FUNC_5()) == ((void*)0))
  return VAR_2;
 if ((VAR_22 = FUNC_7(VAR_21, VAR_7)) < 0 ||
     (VAR_22 = FUNC_7(VAR_21, VAR_8)) < 0 ||

     (VAR_22 = FUNC_9(VAR_21, VAR_10+1)) < 0 ||
     (VAR_22 = FUNC_10(VAR_21, VAR_1)) < 0 ||
     (VAR_22 = FUNC_6(VAR_21, VAR_9, VAR_10)) < 0 ||
     (VAR_22 = FUNC_9(VAR_21, VAR_12+1)) < 0 ||
     (VAR_22 = FUNC_10(VAR_21, VAR_1)) < 0 ||
     (VAR_22 = FUNC_6(VAR_21, VAR_11, VAR_12)) < 0 ||
     (VAR_22 = FUNC_8(VAR_21, VAR_13, VAR_14)) < 0 ||
     (VAR_22 = FUNC_8(VAR_21, VAR_15, VAR_0)) < 0 ||
     (VAR_22 = FUNC_8(VAR_21, VAR_16, VAR_0)) < 0 ||
     (VAR_22 = FUNC_6(VAR_21, VAR_17, VAR_18)) < 0) {
  FUNC_4(VAR_21);
  return VAR_22;
 }



 if (FUNC_1(VAR_6, VAR_21, VAR_19, *VAR_20) != 0) {
  FUNC_4(VAR_21);
  return VAR_4;
 }
 FUNC_4(VAR_21);
 *VAR_20 = FUNC_2(VAR_6);



 return 0;
}
