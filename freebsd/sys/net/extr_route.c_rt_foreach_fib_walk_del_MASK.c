
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rtentry {struct rtentry* rt_chain; } ;
struct TYPE_2__ {int * rti_info; void* rti_filterdata; int * rti_filter; } ;
struct rt_delinfo {TYPE_1__ info; struct rtentry* head; struct rib_head* rnh; } ;
struct rib_head {int head; int (* rnh_walktree ) (int *,int ,struct rt_delinfo*) ;} ;
typedef int rt_filter_f_t ;
typedef int di ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rib_head*) ;
 int FUNC_1 (struct rib_head*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rt_delinfo*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 struct rib_head* FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int *,int ,struct rt_delinfo*) ;

void
FUNC_9(int VAR_6, rt_filter_f_t *VAR_7, void *VAR_8)
{
 struct rib_head *VAR_9;
 struct rt_delinfo VAR_10;
 struct rtentry *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_3(&VAR_10, sizeof(VAR_10));
 VAR_10.info.rti_filter = VAR_7;
 VAR_10.info.rti_filterdata = VAR_8;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {

  if (VAR_6 != VAR_1) {
   VAR_14 = VAR_6;
   VAR_15 = VAR_6;
  } else {
   VAR_14 = 1;
   VAR_15 = VAR_0;
  }

  for (VAR_13 = VAR_14; VAR_13 <= VAR_15; VAR_13++) {
   VAR_9 = FUNC_7(VAR_12, VAR_13);
   if (VAR_9 == ((void*)0))
    continue;
   VAR_10.rnh = VAR_9;

   FUNC_0(VAR_9);
   VAR_9->rnh_walktree(&VAR_9->head, VAR_4, &VAR_10);
   FUNC_1(VAR_9);

   if (VAR_10.head == ((void*)0))
    continue;


   while (VAR_10.head != ((void*)0)) {
    VAR_11 = VAR_10.head;
    VAR_10.head = VAR_11->rt_chain;
    VAR_11->rt_chain = ((void*)0);


    VAR_10.info.rti_info[VAR_2] = FUNC_4(VAR_11);
    VAR_10.info.rti_info[VAR_3] = FUNC_5(VAR_11);

    FUNC_6(VAR_11, &VAR_10.info);
    FUNC_2(VAR_11);
   }

  }
 }
}
