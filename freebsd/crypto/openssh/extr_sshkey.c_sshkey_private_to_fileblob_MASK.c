
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; } ;
struct sshbuf {int dummy; } ;







 int VAR_0 ;
 int FUNC_0 (struct sshkey*,struct sshbuf*,char const*,char const*) ;
 int FUNC_1 (struct sshkey*,struct sshbuf*,char const*,char const*,char const*,int) ;

int
FUNC_2(struct sshkey *VAR_1, struct sshbuf *VAR_2,
    const char *VAR_3, const char *VAR_4,
    int VAR_5, const char *VAR_6, int VAR_7)
{
 switch (VAR_1->type) {
 case 130:



  return FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_6, VAR_7);
 default:
  return VAR_0;
 }
}
