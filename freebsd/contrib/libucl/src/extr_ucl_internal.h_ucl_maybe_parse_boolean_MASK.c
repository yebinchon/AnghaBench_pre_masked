
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iv; } ;
struct TYPE_5__ {TYPE_1__ value; int type; } ;
typedef TYPE_2__ ucl_object_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static inline bool
FUNC_1 (ucl_object_t *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = (const char *)VAR_2;
 bool VAR_5 = 0, VAR_6 = 0;

 if (VAR_3 == 5) {
  if ((VAR_4[0] == 'f' || VAR_4[0] == 'F') && FUNC_0 (VAR_4, "false", 5) == 0) {
   VAR_5 = 1;
   VAR_6 = 0;
  }
 }
 else if (VAR_3 == 4) {
  if ((VAR_4[0] == 't' || VAR_4[0] == 'T') && FUNC_0 (VAR_4, "true", 4) == 0) {
   VAR_5 = 1;
   VAR_6 = 1;
  }
 }
 else if (VAR_3 == 3) {
  if ((VAR_4[0] == 'y' || VAR_4[0] == 'Y') && FUNC_0 (VAR_4, "yes", 3) == 0) {
   VAR_5 = 1;
   VAR_6 = 1;
  }
  else if ((VAR_4[0] == 'o' || VAR_4[0] == 'O') && FUNC_0 (VAR_4, "off", 3) == 0) {
   VAR_5 = 1;
   VAR_6 = 0;
  }
 }
 else if (VAR_3 == 2) {
  if ((VAR_4[0] == 'n' || VAR_4[0] == 'N') && FUNC_0 (VAR_4, "no", 2) == 0) {
   VAR_5 = 1;
   VAR_6 = 0;
  }
  else if ((VAR_4[0] == 'o' || VAR_4[0] == 'O') && FUNC_0 (VAR_4, "on", 2) == 0) {
   VAR_5 = 1;
   VAR_6 = 1;
  }
 }

 if (VAR_5 && VAR_1 != ((void*)0)) {
  VAR_1->type = VAR_0;
  VAR_1->value.iv = VAR_6;
 }

 return VAR_5;
}
