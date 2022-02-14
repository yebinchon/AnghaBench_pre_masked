
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int**,int*,int*) ;
 int FUNC_1 (int**,int*,int*) ;
 int FUNC_2 (int**,int*,int) ;
 int FUNC_3 (int**,int*) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (bfd_byte **VAR_2, bfd_byte *VAR_3, unsigned int VAR_4)
{
  bfd_byte VAR_5;
  bfd_vma VAR_6;

  if (!FUNC_0 (VAR_2, VAR_3, &VAR_5))
    return VAR_0;

  switch (VAR_5 & 0xc0 ? VAR_5 & 0xc0 : VAR_5)
    {
    case 142:
    case 153:
    case 136:
    case 137:
    case 134:
    case 155:

      return VAR_1;

    case 141:
    case 135:
    case 131:
    case 133:
    case 145:
    case 147:
    case 146:
    case 157:

      return FUNC_3 (VAR_2, VAR_3);

    case 129:
    case 128:
    case 140:
    case 138:
    case 149:
    case 139:
    case 156:
    case 144:

      return (FUNC_3 (VAR_2, VAR_3)
       && FUNC_3 (VAR_2, VAR_3));

    case 148:

      return (FUNC_1 (VAR_2, VAR_3, &VAR_6)
       && FUNC_2 (VAR_2, VAR_3, VAR_6));

    case 143:
    case 130:

      return (FUNC_3 (VAR_2, VAR_3)
       && FUNC_1 (VAR_2, VAR_3, &VAR_6)
       && FUNC_2 (VAR_2, VAR_3, VAR_6));

    case 132:
      return FUNC_2 (VAR_2, VAR_3, VAR_4);

    case 152:
      return FUNC_2 (VAR_2, VAR_3, 1);

    case 151:
      return FUNC_2 (VAR_2, VAR_3, 2);

    case 150:
      return FUNC_2 (VAR_2, VAR_3, 4);

    case 154:
      return FUNC_2 (VAR_2, VAR_3, 8);

    default:
      return VAR_0;
    }
}
