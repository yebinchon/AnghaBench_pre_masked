
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct rrset_parse {scalar_t__ hash; size_t dname_len; scalar_t__ type; scalar_t__ rrset_class; scalar_t__ flags; int dname; } ;
typedef int sldns_buffer ;
typedef scalar_t__ hashvalue_type ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct rrset_parse* VAR_0, sldns_buffer* VAR_1, hashvalue_type VAR_2,
 uint32_t VAR_3, uint8_t* VAR_4, size_t VAR_5,
 uint16_t VAR_6, uint16_t VAR_7)
{
 if(VAR_0->hash == VAR_2 && VAR_0->dname_len == VAR_5 && VAR_0->type == VAR_6 &&
  VAR_0->rrset_class == VAR_7 && VAR_0->flags == VAR_3 &&
  FUNC_0(VAR_1, VAR_4, VAR_0->dname) == 0)
  return 1;
 return 0;
}
