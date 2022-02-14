
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int conn; } ;
struct eap_teap_data {scalar_t__ state; TYPE_1__ ssl; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t const) ;
 int FUNC_2 (int ,int *,size_t const) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_5(struct eap_sm *VAR_4, void *VAR_5, size_t *VAR_6)
{
 struct eap_teap_data *VAR_7 = VAR_5;
 const size_t VAR_8 = 100;
 int VAR_9;
 u8 *VAR_10;

 if (VAR_7->state != VAR_3)
  return ((void*)0);

 VAR_10 = FUNC_1(VAR_8);
 if (!VAR_10)
  return ((void*)0);

 VAR_10[0] = VAR_0;
 VAR_9 = FUNC_2(VAR_7->ssl.conn, VAR_10 + 1, VAR_8 - 1);
 if (VAR_9 < 0) {
  FUNC_0(VAR_10);
  FUNC_4(VAR_2, "EAP-TEAP: Failed to derive Session-Id");
  return ((void*)0);
 }

 *VAR_6 = 1 + VAR_9;
 FUNC_3(VAR_1, "EAP-TEAP: Derived Session-Id", VAR_10, *VAR_6);
 return VAR_10;
}
