
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {int e; } ;
struct eap_pax_data {scalar_t__ state; TYPE_1__ rand; int mk; int mac_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int,size_t,int *) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static u8 * FUNC_2(struct eap_sm *VAR_4, void *VAR_5, size_t *VAR_6)
{
 struct eap_pax_data *VAR_7 = VAR_5;
 u8 *VAR_8;

 if (VAR_7->state != VAR_3)
  return ((void*)0);

 VAR_8 = FUNC_1(VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 *VAR_6 = VAR_0;
 FUNC_0(VAR_7->mac_id, VAR_7->mk, VAR_1,
      "Extended Master Session Key",
      VAR_7->rand.e, 2 * VAR_2,
      VAR_0, VAR_8);

 return VAR_8;
}
