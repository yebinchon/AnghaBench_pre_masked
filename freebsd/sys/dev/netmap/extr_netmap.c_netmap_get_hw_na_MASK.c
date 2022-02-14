
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_mem_d {int dummy; } ;
struct netmap_adapter {int na_flags; scalar_t__ na_next_pipe; scalar_t__ active_fds; struct netmap_mem_d* nm_mem; struct netmap_mem_d* nm_mem_prev; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 struct netmap_adapter* FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct netmap_adapter*) ;
 int FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int VAR_7 ;
 struct netmap_mem_d* FUNC_5 (struct netmap_mem_d*) ;

int
FUNC_6(struct ifnet *VAR_8, struct netmap_mem_d *VAR_9, struct netmap_adapter **VAR_10)
{

 int VAR_11 = VAR_7;
 struct netmap_adapter *VAR_12;
 int VAR_13 = 0;

 *VAR_10 = ((void*)0);


 if (VAR_11 < VAR_3 || VAR_11 >= VAR_5)
  VAR_11 = VAR_7 = VAR_3;

 if (FUNC_3(VAR_8)) {
  VAR_12 = FUNC_0(VAR_8);





  if (FUNC_1(VAR_12)
   || VAR_11 != VAR_4
   || VAR_12->na_flags & VAR_1






  ) {
   *VAR_10 = VAR_12;
   goto assign_mem;
  }
 }




 if (!FUNC_2(VAR_8) && VAR_11 == VAR_6)
  return VAR_0;
 VAR_13 = FUNC_4(VAR_8);
 if (VAR_13)
  return VAR_13;

 *VAR_10 = FUNC_0(VAR_8);

assign_mem:
 if (VAR_9 != ((void*)0) && !((*VAR_10)->na_flags & VAR_2) &&
     (*VAR_10)->active_fds == 0 && ((*VAR_10)->nm_mem != VAR_9)) {
  (*VAR_10)->nm_mem_prev = (*VAR_10)->nm_mem;
  (*VAR_10)->nm_mem = FUNC_5(VAR_9);
 }

 return 0;
}
