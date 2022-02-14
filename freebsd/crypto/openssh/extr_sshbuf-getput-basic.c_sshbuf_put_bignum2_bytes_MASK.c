
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (scalar_t__*,size_t) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_3 (struct sshbuf*,size_t,scalar_t__**) ;

int
FUNC_4(struct sshbuf *VAR_2, const void *VAR_3, size_t VAR_4)
{
 u_char *VAR_5;
 const u_char *VAR_6 = (const u_char *)VAR_3;
 int VAR_7, VAR_8;

 if (VAR_4 > VAR_0 - 5) {
  FUNC_1(("SSH_ERR_NO_BUFFER_SPACE"));
  return VAR_1;
 }

 for (; VAR_4 > 0 && *VAR_6 == 0; VAR_4--, VAR_6++)
  ;




 VAR_8 = VAR_4 > 0 && (VAR_6[0] & 0x80) != 0;
 if ((VAR_7 = FUNC_3(VAR_2, VAR_4 + 4 + VAR_8, &VAR_5)) < 0)
  return VAR_7;
 FUNC_0(VAR_5, VAR_4 + VAR_8);
 if (VAR_8)
  VAR_5[4] = 0;
 if (VAR_4 != 0)
  FUNC_2(VAR_5 + 4 + VAR_8, VAR_6, VAR_4);
 return 0;
}
