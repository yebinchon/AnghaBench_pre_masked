
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum complain_overflow { ____Placeholder_complain_overflow } complain_overflow ;
typedef unsigned int bfd_vma ;
typedef int bfd_reloc_status_type ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;





bfd_reloc_status_type
FUNC_2 (enum complain_overflow VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5,
      bfd_vma VAR_6)
{
  bfd_vma VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  bfd_reloc_status_type VAR_12 = VAR_0;





  VAR_7 = FUNC_0 (VAR_3);
  VAR_9 = ~VAR_7;
  VAR_8 = FUNC_0 (VAR_5) | VAR_7;
  VAR_11 = (VAR_6 & VAR_8) >> VAR_4;;

  switch (VAR_2)
    {
    case 130:
      break;

    case 129:


      VAR_9 = ~ (VAR_7 >> 1);


    case 131:





      VAR_10 = VAR_11 & VAR_9;
      if (VAR_10 != 0 && VAR_10 != ((VAR_8 >> VAR_4) & VAR_9))
 VAR_12 = VAR_1;
      break;

    case 128:

      if ((VAR_11 & VAR_9) != 0)
 VAR_12 = VAR_1;
      break;

    default:
      FUNC_1 ();
    }

  return VAR_12;
}
