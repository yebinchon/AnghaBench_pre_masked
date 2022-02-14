
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int dummy; } ;
typedef scalar_t__ ieee_record_enum_type ;
typedef int bfd_vma ;
typedef unsigned int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ieee_info*,unsigned int const*,int ) ;
 int FUNC_2 (struct ieee_info*,unsigned int const**,int *) ;
 int FUNC_3 (struct ieee_info*,unsigned int const**,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct ieee_info *VAR_3, const bfd_byte **VAR_4, bfd_vma *VAR_5)
{
  const bfd_byte *VAR_6;
  ieee_record_enum_type VAR_7;
  bfd_vma VAR_8;

  VAR_6 = *VAR_4;

  VAR_7 = (ieee_record_enum_type) **VAR_4;
  if (VAR_7 != VAR_2)
    {
      FUNC_1 (VAR_3, VAR_6, FUNC_0("missing required ASN"));
      return VAR_0;
    }
  ++*VAR_4;

  VAR_7 = (ieee_record_enum_type) (((unsigned int) VAR_7 << 8) | **VAR_4);
  if (VAR_7 != VAR_1)
    {
      FUNC_1 (VAR_3, VAR_6, FUNC_0("missing required ASN"));
      return VAR_0;
    }
  ++*VAR_4;


  if (! FUNC_3 (VAR_3, VAR_4, &VAR_8))
    return VAR_0;

  return FUNC_2 (VAR_3, VAR_4, VAR_5);
}
