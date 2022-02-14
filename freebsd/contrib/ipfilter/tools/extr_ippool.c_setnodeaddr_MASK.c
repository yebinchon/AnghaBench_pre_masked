
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct in_addr {int s_addr; } ;
struct in6_addr {int dummy; } ;
typedef void* sa_family_t ;
struct TYPE_21__ {int* __u6_addr32; } ;
struct TYPE_22__ {TYPE_13__ __u6_addr; } ;
struct TYPE_34__ {int s_addr; } ;
struct TYPE_23__ {TYPE_14__ in6; TYPE_9__ in4; } ;
struct TYPE_18__ {int __u6_addr32; } ;
struct TYPE_19__ {TYPE_10__ __u6_addr; } ;
struct TYPE_33__ {void* s_addr; } ;
struct TYPE_20__ {TYPE_11__ in6; TYPE_8__ in4; } ;
struct TYPE_24__ {scalar_t__ ipe_family; int ipe_unit; TYPE_15__ ipe_mask; TYPE_12__ ipe_addr; } ;
typedef TYPE_16__ iphtent_t ;
struct TYPE_30__ {int s_addr; } ;
struct TYPE_31__ {TYPE_5__ in4; } ;
struct TYPE_32__ {TYPE_6__ adf_addr; void* adf_len; } ;
struct TYPE_27__ {int s6_addr; } ;
struct TYPE_26__ {void* s_addr; } ;
struct TYPE_28__ {TYPE_2__ in6; TYPE_1__ in4; } ;
struct TYPE_29__ {scalar_t__ adf_family; void* adf_len; TYPE_3__ adf_addr; } ;
struct TYPE_25__ {TYPE_7__ ipn_mask; TYPE_4__ ipn_addr; } ;
typedef TYPE_17__ ip_pool_node_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int*) ;
 void* FUNC_4 (int ,int ) ;
 char* FUNC_5 (char*,char) ;

int
FUNC_6(int VAR_6, int VAR_7, void *VAR_8, char *VAR_9)
{
 struct in_addr VAR_10;
 sa_family_t VAR_11;
 char *VAR_12;

 if (FUNC_5(VAR_9, ':') == ((void*)0)) {
  VAR_11 = VAR_0;
  VAR_12 = FUNC_5(VAR_9, '/');
  if (VAR_12 == ((void*)0))
   VAR_10.s_addr = 0xffffffff;
  else if (FUNC_5(VAR_12, '.') == ((void*)0)) {
   if (FUNC_3(VAR_0, FUNC_0(VAR_12 + 1), &VAR_10.s_addr) != 0)
    return -1;
  } else {
   VAR_10.s_addr = FUNC_1(VAR_12 + 1);
  }
  if (VAR_12 != ((void*)0))
   *VAR_12 = '\0';
 } else {
  VAR_11 = VAR_1;





  if ((VAR_12 = FUNC_5(VAR_9, '/')) == ((void*)0))
   VAR_10.s_addr = 128;
  else
   VAR_10.s_addr = FUNC_0(VAR_12 + 1);
 }

 if (VAR_6 == VAR_3) {
  ip_pool_node_t *VAR_13 = VAR_8;

  VAR_13->ipn_addr.adf_family = VAR_11;




   VAR_13->ipn_addr.adf_len = FUNC_4(VAR_4,
         VAR_5) +
       sizeof(struct in_addr);
   VAR_13->ipn_addr.adf_addr.in4.s_addr = FUNC_1(VAR_9);
  VAR_13->ipn_mask.adf_len = VAR_13->ipn_addr.adf_len;
  VAR_13->ipn_mask.adf_addr.in4.s_addr = VAR_10.s_addr;
 } else if (VAR_6 == VAR_2) {
  iphtent_t *VAR_14 = VAR_8;

         VAR_14->ipe_family = VAR_11;
  VAR_14->ipe_unit = VAR_7;




   VAR_14->ipe_addr.in4.s_addr = FUNC_1(VAR_9);
   VAR_14->ipe_mask.in4.s_addr = VAR_10.s_addr;
 }

 return 0;
}
