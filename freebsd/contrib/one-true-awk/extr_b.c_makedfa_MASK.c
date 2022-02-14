
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int anchor; int use; scalar_t__ restr; } ;
typedef TYPE_1__ fa ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (char const*,int) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int* VAR_6 ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 int* VAR_7 ;

fa *FUNC_5(const char *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 fa *VAR_13;
 static int VAR_14 = 1;

 if (VAR_6 == ((void*)0)) {
  VAR_4 = VAR_0;
  VAR_6 = (int *) FUNC_1(VAR_4 * sizeof(int));
  VAR_7 = (int *) FUNC_1(VAR_4 * sizeof(int));
  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
   FUNC_3("out of space initializing makedfa");
 }

 if (VAR_2)
  return FUNC_2(VAR_8, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (VAR_3[VAR_10]->anchor == VAR_9
    && FUNC_4((const char *) VAR_3[VAR_10]->restr, VAR_8) == 0) {
   VAR_3[VAR_10]->use = VAR_14++;
   return VAR_3[VAR_10];
  }
 VAR_13 = FUNC_2(VAR_8, VAR_9);
 if (VAR_5 < VAR_1) {
  VAR_3[VAR_5] = VAR_13;
  VAR_3[VAR_5]->use = VAR_14++;
  VAR_5++;
  return VAR_13;
 }
 VAR_11 = VAR_3[0]->use;
 VAR_12 = 0;
 for (VAR_10 = 1; VAR_10 < VAR_5; VAR_10++)
  if (VAR_3[VAR_10]->use < VAR_11) {
   VAR_11 = VAR_3[VAR_10]->use;
   VAR_12 = VAR_10;
  }
 FUNC_0(VAR_3[VAR_12]);
 VAR_3[VAR_12] = VAR_13;
 VAR_13->use = VAR_14++;
 return VAR_13;
}
