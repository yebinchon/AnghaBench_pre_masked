
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int type ;
typedef size_t dmu_object_byteswap_t ;
typedef int blkptr_t ;
struct TYPE_8__ {int ot_name; } ;
struct TYPE_7__ {char* ob_name; } ;
struct TYPE_6__ {char* ci_name; } ;
struct TYPE_5__ {char* ci_name; } ;


 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int VAR_0 ;
 int FUNC_6 (int (*) (char*,int,char*,char*,char*),char,char*,size_t,int const*,char*,char*,char*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 int FUNC_8 (char*,int ,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_9(char *VAR_5, size_t VAR_6, const blkptr_t *VAR_7)
{
 char VAR_8[256];
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);

 if (VAR_7 != ((void*)0)) {
  if (FUNC_2(VAR_7) & VAR_0) {
   dmu_object_byteswap_t VAR_11 =
       FUNC_4(FUNC_2(VAR_7));
   (void) FUNC_7(VAR_8, sizeof (VAR_8), "bswap %s %s",
       FUNC_5(FUNC_2(VAR_7)) ?
       "metadata" : "data",
       VAR_2[VAR_11].ob_name);
  } else {
   (void) FUNC_8(VAR_8, VAR_1[FUNC_2(VAR_7)].ot_name,
       sizeof (VAR_8));
  }
  if (!FUNC_3(VAR_7)) {
   VAR_9 =
       VAR_3[FUNC_0(VAR_7)].ci_name;
  }
  VAR_10 = VAR_4[FUNC_1(VAR_7)].ci_name;
 }

 FUNC_6(FUNC_7, ' ', VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     VAR_10);
}
