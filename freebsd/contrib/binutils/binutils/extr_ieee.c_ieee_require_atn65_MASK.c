
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int dummy; } ;
typedef scalar_t__ ieee_record_enum_type ;
typedef scalar_t__ bfd_vma ;
typedef unsigned int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ieee_info*,unsigned int const*,int ) ;
 int FUNC_2 (struct ieee_info*,unsigned int const**,char const**,unsigned long*) ;
 int FUNC_3 (struct ieee_info*,unsigned int const**,scalar_t__*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct ieee_info *VAR_3, const bfd_byte **VAR_4,
      const char **VAR_5, unsigned long *VAR_6)
{
  const bfd_byte *VAR_7;
  ieee_record_enum_type VAR_8;
  bfd_vma VAR_9, VAR_10, VAR_11;

  VAR_7 = *VAR_4;

  VAR_8 = (ieee_record_enum_type) **VAR_4;
  if (VAR_8 != VAR_1)
    {
      FUNC_1 (VAR_3, VAR_7, FUNC_0("missing required ATN65"));
      return VAR_0;
    }
  ++*VAR_4;

  VAR_8 = (ieee_record_enum_type) (((unsigned int) VAR_8 << 8) | **VAR_4);
  if (VAR_8 != VAR_2)
    {
      FUNC_1 (VAR_3, VAR_7, FUNC_0("missing required ATN65"));
      return VAR_0;
    }
  ++*VAR_4;

  if (! FUNC_3 (VAR_3, VAR_4, &VAR_9)
      || ! FUNC_3 (VAR_3, VAR_4, &VAR_10)
      || ! FUNC_3 (VAR_3, VAR_4, &VAR_11))
    return VAR_0;



  if (VAR_10 != 0 || VAR_11 != 65)
    {
      FUNC_1 (VAR_3, VAR_7, FUNC_0("bad ATN65 record"));
      return VAR_0;
    }

  return FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_6);
}
