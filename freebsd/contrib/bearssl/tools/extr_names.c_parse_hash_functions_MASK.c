
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; TYPE_1__* hclass; } ;
struct TYPE_3__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,char const*,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,int,size_t,int ) ;
 TYPE_2__* VAR_2 ;
 char* FUNC_3 (char const**,size_t*) ;
 int VAR_3 ;
 int FUNC_4 (char const*) ;

unsigned
FUNC_5(const char *VAR_4)
{
 unsigned VAR_5;

 VAR_5 = 0;
 for (;;) {
  const char *VAR_6;
  size_t VAR_7;
  size_t VAR_8;

  VAR_6 = FUNC_3(&VAR_4, &VAR_7);
  if (VAR_6 == ((void*)0)) {
   break;
  }
  for (VAR_8 = 0;; VAR_8 ++) {
   const char *VAR_9;

   VAR_9 = VAR_2[VAR_8].name;
   if (VAR_9 == 0) {
    FUNC_1(VAR_3, "ERROR: unrecognised"
     " hash function name: '");
    FUNC_2(VAR_6, 1, VAR_7, VAR_3);
    FUNC_1(VAR_3, "'\n");
    return 0;
   }
   if (FUNC_0(VAR_9, FUNC_4(VAR_9), VAR_6, VAR_7)) {
    int VAR_10;

    VAR_10 = (VAR_2[VAR_8].hclass->desc
     >> VAR_1)
     & VAR_0;
    VAR_5 |= (unsigned)1 << VAR_10;
    break;
   }
  }
 }
 if (VAR_5 == 0) {
  FUNC_1(VAR_3, "ERROR: no hash function name provided\n");
 }
 return VAR_5;
}
