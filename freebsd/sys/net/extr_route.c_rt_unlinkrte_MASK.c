
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rtentry {int rt_flags; struct sockaddr* rt_gateway; } ;
struct rt_addrinfo {int rti_flags; scalar_t__ (* rti_filter ) (struct rtentry*,int ) ;struct sockaddr** rti_info; int rti_filterdata; } ;
struct rib_head {int head; struct radix_node* (* rnh_deladdr ) (struct sockaddr*,struct sockaddr*,int *) ;scalar_t__ (* rnh_lookup ) (struct sockaddr*,struct sockaddr*,int *) ;} ;
struct radix_node {int rn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtentry* FUNC_0 (struct radix_node*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct rib_head*) ;
 struct radix_node* FUNC_5 (struct rib_head*,struct rt_addrinfo*,struct rtentry*,int*) ;
 scalar_t__ FUNC_6 (struct sockaddr*,struct sockaddr*,int *) ;
 scalar_t__ FUNC_7 (struct rtentry*,int ) ;
 struct radix_node* FUNC_8 (struct sockaddr*,struct sockaddr*,int *) ;

__attribute__((used)) static struct rtentry *
FUNC_9(struct rib_head *VAR_10, struct rt_addrinfo *VAR_11, int *VAR_12)
{
 struct sockaddr *VAR_13, *VAR_14;
 struct rtentry *VAR_15;
 struct radix_node *VAR_16;

 VAR_13 = VAR_11->rti_info[VAR_5];
 VAR_14 = VAR_11->rti_info[VAR_7];

 VAR_15 = (struct rtentry *)VAR_10->rnh_lookup(VAR_13, VAR_14, &VAR_10->head);
 if (VAR_15 == ((void*)0)) {
  *VAR_12 = VAR_2;
  return (((void*)0));
 }

 if ((VAR_11->rti_flags & VAR_8) == 0) {

  if (VAR_15->rt_flags & VAR_8) {
   *VAR_12 = VAR_0;
   return (((void*)0));
  }
 }

 if (VAR_11->rti_filter != ((void*)0)) {
  if (VAR_11->rti_filter(VAR_15, VAR_11->rti_filterdata) == 0) {

   *VAR_12 = VAR_1;
   return (((void*)0));
  }






  VAR_11->rti_info[VAR_6] = VAR_15->rt_gateway;
 }





 *VAR_12 = VAR_2;





 VAR_16 = VAR_10->rnh_deladdr(VAR_13, VAR_14, &VAR_10->head);
 if (VAR_16 == ((void*)0))
  return (((void*)0));

 if (VAR_16->rn_flags & (VAR_3 | VAR_4))
  FUNC_3 ("rtrequest delete");

 VAR_15 = FUNC_0(VAR_16);
 FUNC_2(VAR_15);
 FUNC_1(VAR_15);
 VAR_15->rt_flags &= ~VAR_9;

 *VAR_12 = 0;

 return (VAR_15);
}
