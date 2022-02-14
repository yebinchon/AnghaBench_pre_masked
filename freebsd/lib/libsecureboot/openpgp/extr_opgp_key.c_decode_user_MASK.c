
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {char* id; char* name; } ;
typedef TYPE_1__ OpenPGP_user ;


 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;

ssize_t
FUNC_4(int VAR_0, unsigned char **VAR_1, size_t VAR_2, OpenPGP_user *VAR_3)
{
 char *VAR_4;

 if (VAR_0 == 13) {
  VAR_3->id = FUNC_0(VAR_2 + 1);
  FUNC_3(VAR_3->id, (char *)*VAR_1, VAR_2);
  VAR_3->id[VAR_2] = '\0';
  VAR_3->name = VAR_3->id;
  VAR_4 = FUNC_1(VAR_3->id, '<');
  if (VAR_4 > VAR_3->id) {
   VAR_3->id = FUNC_2(VAR_3->id);
   VAR_4[-1] = '\0';
  }
 }
 *VAR_1 += VAR_2;
 return ((ssize_t)VAR_2);
}
