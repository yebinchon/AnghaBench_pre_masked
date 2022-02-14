
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;







 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (bfd_vma VAR_1)
{
  int VAR_2 = 1;

  while (VAR_1)
    {
      bfd_vma VAR_3;

      VAR_3 = VAR_1 & - VAR_1;
      VAR_1 &= ~ VAR_3;

      if (VAR_2)
 VAR_2 = 0;
      else
 FUNC_1 (' ', VAR_0);

      switch (VAR_3)
 {
 case 131: FUNC_0 ("ORIGIN", VAR_0); break;
 case 129: FUNC_0 ("SYMBOLIC", VAR_0); break;
 case 128: FUNC_0 ("TEXTREL", VAR_0); break;
 case 132: FUNC_0 ("BIND_NOW", VAR_0); break;
 case 130: FUNC_0 ("STATIC_TLS", VAR_0); break;
 default: FUNC_0 ("unknown", VAR_0); break;
 }
    }
  FUNC_2 ("");
}
