
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802_1x_mka_participant {scalar_t__ new_key; scalar_t__ to_dist_sak; scalar_t__ is_key_server; } ;
typedef int Boolean ;



__attribute__((used)) static Boolean
FUNC_0(
 struct ieee802_1x_mka_participant *VAR_0)
{
 return VAR_0->is_key_server && VAR_0->to_dist_sak &&
  VAR_0->new_key;
}
