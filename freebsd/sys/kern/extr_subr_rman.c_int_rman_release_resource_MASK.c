
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int rm_list; } ;
struct resource_i {int r_flags; scalar_t__ r_end; scalar_t__ r_start; int * r_dev; struct resource_i* r_sharehead; } ;


 struct resource_i* FUNC_0 (struct resource_i*) ;
 int * FUNC_1 (struct resource_i*,int ) ;
 int FUNC_2 (struct resource_i*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct resource_i*,struct resource_i*,int ) ;
 struct resource_i* FUNC_4 (struct resource_i*,int ) ;
 struct resource_i* FUNC_5 (struct resource_i*,int ,int ) ;
 int FUNC_6 (int *,struct resource_i*,int ) ;
 int FUNC_7 (struct resource_i*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct rman *VAR_7, struct resource_i *VAR_8)
{
 struct resource_i *VAR_9, *VAR_10;

 if (VAR_8->r_flags & VAR_1)
  VAR_8->r_flags &= ~VAR_1;





 if (VAR_8->r_sharehead) {






  FUNC_2(VAR_8, VAR_5);
  VAR_9 = FUNC_0(VAR_8->r_sharehead);
  if (VAR_8->r_flags & VAR_3) {
   VAR_9->r_flags |= VAR_3;
   FUNC_3(VAR_8, VAR_9, VAR_4);
   FUNC_6(&VAR_7->rm_list, VAR_8, VAR_4);
  }





  if (FUNC_1(VAR_9, VAR_5) == ((void*)0)) {
   FUNC_7(VAR_9->r_sharehead, VAR_0);
   VAR_9->r_sharehead = ((void*)0);
   VAR_9->r_flags &= ~VAR_3;
  }
  goto out;
 }







 VAR_9 = FUNC_5(VAR_8, VAR_6, VAR_4);
 if (VAR_9 != ((void*)0) && ((VAR_9->r_flags & VAR_2) != 0 ||
     VAR_9->r_end + 1 != VAR_8->r_start))
  VAR_9 = ((void*)0);
 VAR_10 = FUNC_4(VAR_8, VAR_4);
 if (VAR_10 != ((void*)0) && ((VAR_10->r_flags & VAR_2) != 0 ||
     VAR_8->r_end + 1 != VAR_10->r_start))
  VAR_10 = ((void*)0);

 if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {



  VAR_9->r_end = VAR_10->r_end;
  FUNC_6(&VAR_7->rm_list, VAR_8, VAR_4);
  FUNC_6(&VAR_7->rm_list, VAR_10, VAR_4);
  FUNC_7(VAR_10, VAR_0);
 } else if (VAR_9 != ((void*)0)) {



  VAR_9->r_end = VAR_8->r_end;
  FUNC_6(&VAR_7->rm_list, VAR_8, VAR_4);
 } else if (VAR_10 != ((void*)0)) {



  VAR_10->r_start = VAR_8->r_start;
  FUNC_6(&VAR_7->rm_list, VAR_8, VAR_4);
 } else {
  VAR_8->r_flags &= ~VAR_2;
  VAR_8->r_dev = ((void*)0);
  return 0;
 }

out:
 FUNC_7(VAR_8, VAR_0);
 return 0;
}
