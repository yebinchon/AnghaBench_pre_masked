
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {scalar_t__ reauth_id; scalar_t__ pseudonym; } ;
typedef int Boolean ;



__attribute__((used)) static Boolean FUNC_0(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_aka_data *VAR_2 = VAR_1;
 return VAR_2->pseudonym || VAR_2->reauth_id;
}
