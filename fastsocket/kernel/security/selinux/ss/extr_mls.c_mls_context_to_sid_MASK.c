
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sidtab {int dummy; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_6__ {int table; } ;
struct policydb {TYPE_3__ p_cats; TYPE_1__ p_levels; } ;
struct level_datum {TYPE_2__* level; } ;
struct TYPE_10__ {TYPE_4__* level; } ;
struct context {TYPE_5__ range; } ;
struct cat_datum {int value; } ;
struct TYPE_9__ {int cat; int sens; } ;
struct TYPE_7__ {int sens; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct context*,struct context*) ;
 int VAR_2 ;
 struct context* FUNC_4 (struct sidtab*,scalar_t__) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*) ;

int FUNC_7(struct policydb *VAR_3,
         char VAR_4,
         char **VAR_5,
         struct context *VAR_6,
         struct sidtab *VAR_7,
         u32 VAR_8)
{

 char VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 struct level_datum *VAR_13;
 struct cat_datum *VAR_14, *VAR_15;
 int VAR_16, VAR_17 = -VAR_0;

 if (!VAR_2) {
  if (VAR_8 != VAR_1 && VAR_4)
   *VAR_5 += FUNC_6(*VAR_5)+1;
  return 0;
 }





 if (!VAR_4) {
  struct context *VAR_18;

  if (VAR_8 == VAR_1)
   goto out;

  VAR_18 = FUNC_4(VAR_7, VAR_8);
  if (!VAR_18)
   goto out;

  VAR_17 = FUNC_3(VAR_6, VAR_18);
  goto out;
 }


 VAR_10 = VAR_11 = *VAR_5;
 while (*VAR_11 && *VAR_11 != ':' && *VAR_11 != '-')
  VAR_11++;

 VAR_9 = *VAR_11;
 if (VAR_9 != '\0')
  *VAR_11++ = '\0';

 for (VAR_16 = 0; VAR_16 < 2; VAR_16++) {
  VAR_13 = FUNC_2(VAR_3->p_levels.table, VAR_10);
  if (!VAR_13) {
   VAR_17 = -VAR_0;
   goto out;
  }

  VAR_6->range.level[VAR_16].sens = VAR_13->level->sens;

  if (VAR_9 == ':') {

   while (1) {
    VAR_10 = VAR_11;
    while (*VAR_11 && *VAR_11 != ',' && *VAR_11 != '-')
     VAR_11++;
    VAR_9 = *VAR_11;
    if (VAR_9 != '\0')
     *VAR_11++ = '\0';


    VAR_12 = FUNC_5(VAR_10, '.');
    if (VAR_12 != ((void*)0)) {

     *VAR_12++ = '\0';
    }

    VAR_14 = FUNC_2(VAR_3->p_cats.table,
         VAR_10);
    if (!VAR_14) {
     VAR_17 = -VAR_0;
     goto out;
    }

    VAR_17 = FUNC_1(&VAR_6->range.level[VAR_16].cat,
           VAR_14->value - 1, 1);
    if (VAR_17)
     goto out;


    if (VAR_12) {
     int VAR_19;

     VAR_15 = FUNC_2(VAR_3->p_cats.table, VAR_12);
     if (!VAR_15) {
      VAR_17 = -VAR_0;
      goto out;
     }

     if (VAR_14->value >= VAR_15->value) {
      VAR_17 = -VAR_0;
      goto out;
     }

     for (VAR_19 = VAR_14->value; VAR_19 < VAR_15->value; VAR_19++) {
      VAR_17 = FUNC_1(&VAR_6->range.level[VAR_16].cat, VAR_19, 1);
      if (VAR_17)
       goto out;
     }
    }

    if (VAR_9 != ',')
     break;
   }
  }
  if (VAR_9 == '-') {

   VAR_10 = VAR_11;
   while (*VAR_11 && *VAR_11 != ':')
    VAR_11++;

   VAR_9 = *VAR_11;
   if (VAR_9 != '\0')
    *VAR_11++ = '\0';
  } else
   break;
 }

 if (VAR_16 == 0) {
  VAR_6->range.level[1].sens = VAR_6->range.level[0].sens;
  VAR_17 = FUNC_0(&VAR_6->range.level[1].cat,
     &VAR_6->range.level[0].cat);
  if (VAR_17)
   goto out;
 }
 *VAR_5 = ++VAR_11;
 VAR_17 = 0;
out:
 return VAR_17;
}
