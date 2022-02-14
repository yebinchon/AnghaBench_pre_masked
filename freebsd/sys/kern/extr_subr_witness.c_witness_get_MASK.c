
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct witness {int w_index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct witness* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct witness*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct witness *
FUNC_8(void)
{
 struct witness *VAR_9;
 int VAR_10;

 if (VAR_6 == 0)
  FUNC_5(&VAR_5, VAR_0);

 if (VAR_8 == -1) {
  FUNC_6(&VAR_5);
  return (((void*)0));
 }
 if (FUNC_1(&VAR_1)) {
  VAR_8 = -1;
  FUNC_6(&VAR_5);
  FUNC_7("WITNESS: unable to allocate a new witness object\n");
  return (((void*)0));
 }
 VAR_9 = FUNC_2(&VAR_1);
 FUNC_3(&VAR_1, VAR_3);
 VAR_2--;
 VAR_10 = VAR_9->w_index;
 FUNC_0(VAR_10 > 0 && VAR_10 == VAR_4+1 &&
     VAR_10 < VAR_7);
 FUNC_4(VAR_9, sizeof(*VAR_9));
 VAR_9->w_index = VAR_10;
 if (VAR_10 > VAR_4)
  VAR_4 = VAR_10;
 return (VAR_9);
}
