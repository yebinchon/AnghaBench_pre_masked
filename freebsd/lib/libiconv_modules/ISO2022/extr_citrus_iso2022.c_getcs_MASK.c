
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char final; char interm; char vers; int type; } ;
typedef TYPE_1__ _ISO2022Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static __inline int
FUNC_1(const char * __restrict VAR_4, _ISO2022Charset * __restrict VAR_5)
{

 if (!FUNC_0(VAR_4, "94$", 3) && VAR_4[3] && !VAR_4[4]) {
  VAR_5->final = (unsigned char)(VAR_4[3] & 0xff);
  VAR_5->interm = '\0';
  VAR_5->vers = '\0';
  VAR_5->type = VAR_1;
 } else if (!FUNC_0(VAR_4, "96$", 3) && VAR_4[3] && !VAR_4[4]) {
  VAR_5->final = (unsigned char)(VAR_4[3] & 0xff);
  VAR_5->interm = '\0';
  VAR_5->vers = '\0';
  VAR_5->type = VAR_3;
 } else if (!FUNC_0(VAR_4, "94", 2) && VAR_4[2] && !VAR_4[3]) {
  VAR_5->final = (unsigned char)(VAR_4[2] & 0xff);
  VAR_5->interm = '\0';
  VAR_5->vers = '\0';
  VAR_5->type = VAR_0;
 } else if (!FUNC_0(VAR_4, "96", 2) && VAR_4[2] && !VAR_4[3]) {
  VAR_5->final = (unsigned char )(VAR_4[2] & 0xff);
  VAR_5->interm = '\0';
  VAR_5->vers = '\0';
  VAR_5->type = VAR_2;
 } else
  return (1);

 return (0);
}
