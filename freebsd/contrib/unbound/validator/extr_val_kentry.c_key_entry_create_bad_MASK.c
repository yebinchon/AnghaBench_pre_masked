
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct regional {int dummy; } ;
struct key_entry_key {int dummy; } ;
struct key_entry_data {int isbad; int * algo; int * rrset_data; int rrset_type; int * reason; scalar_t__ ttl; } ;


 int VAR_0 ;
 int FUNC_0 (struct regional*,int *,size_t,int ,struct key_entry_key**,struct key_entry_data**) ;

struct key_entry_key*
FUNC_1(struct regional* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, uint16_t VAR_4, time_t VAR_5,
 time_t VAR_6)
{
 struct key_entry_key* VAR_7;
 struct key_entry_data* VAR_8;
 if(!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8))
  return ((void*)0);
 VAR_8->ttl = VAR_6 + VAR_5;
 VAR_8->isbad = 1;
 VAR_8->reason = ((void*)0);
 VAR_8->rrset_type = VAR_0;
 VAR_8->rrset_data = ((void*)0);
 VAR_8->algo = ((void*)0);
 return VAR_7;
}
