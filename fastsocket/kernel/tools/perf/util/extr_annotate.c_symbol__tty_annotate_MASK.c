
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int dummy; } ;
struct rb_root {int dummy; } ;
struct map {struct dso* dso; } ;
struct dso {char* long_name; } ;
struct TYPE_4__ {TYPE_1__* src; } ;
struct TYPE_3__ {int source; } ;


 struct rb_root VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rb_root*,char const*) ;
 scalar_t__ FUNC_2 (struct symbol*,struct map*,int ) ;
 int FUNC_3 (struct symbol*,struct map*,int,int,int,int,int ) ;
 TYPE_2__* FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*,int ) ;
 int FUNC_6 (struct symbol*,struct map*,int,struct rb_root*,int ,char const*) ;
 int FUNC_7 (struct symbol*) ;

int FUNC_8(struct symbol *VAR_1, struct map *VAR_2, int VAR_3,
    bool VAR_4, bool VAR_5, int VAR_6,
    int VAR_7)
{
 struct dso *VAR_8 = VAR_2->dso;
 const char *VAR_9 = VAR_8->long_name;
 struct rb_root VAR_10 = VAR_0;
 u64 VAR_11;

 if (FUNC_2(VAR_1, VAR_2, 0) < 0)
  return -1;

 VAR_11 = FUNC_7(VAR_1);

 if (VAR_4) {
  FUNC_6(VAR_1, VAR_2, VAR_3, &VAR_10,
     VAR_11, VAR_9);
  FUNC_1(&VAR_10, VAR_9);
 }

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5,
    VAR_6, VAR_7, 0);
 if (VAR_4)
  FUNC_5(VAR_1, VAR_11);

 FUNC_0(&FUNC_4(VAR_1)->src->source);

 return 0;
}
