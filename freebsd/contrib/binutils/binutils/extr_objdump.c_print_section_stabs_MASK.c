
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (unsigned char) ;
 unsigned short FUNC_2 (int *,int *) ;
 void* FUNC_3 (int *,int *) ;
 unsigned char FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (char*,...) ;
 int VAR_7 ;
 int * VAR_8 ;
 unsigned long VAR_9 ;
 char* VAR_10 ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_11,
       const char *VAR_12,
       unsigned *VAR_13)
{
  int VAR_14;
  unsigned VAR_15 = 0;
  unsigned VAR_16 = *VAR_13;
  bfd_byte *VAR_17, *VAR_18;

  VAR_17 = VAR_8;
  VAR_18 = VAR_17 + VAR_7;

  FUNC_6 (FUNC_0("Contents of %s section:\n\n"), VAR_12);
  FUNC_6 ("Symnum n_type n_othr n_desc n_value  n_strx String\n");





  for (VAR_14 = -1; VAR_17 < VAR_18; VAR_17 += VAR_3, VAR_14++)
    {
      const char *VAR_19;
      unsigned long VAR_20;
      unsigned char VAR_21, VAR_22;
      unsigned short VAR_23;
      bfd_vma VAR_24;

      VAR_20 = FUNC_3 (VAR_11, VAR_17 + VAR_4);
      VAR_21 = FUNC_4 (VAR_11, VAR_17 + VAR_5);
      VAR_22 = FUNC_4 (VAR_11, VAR_17 + VAR_2);
      VAR_23 = FUNC_2 (VAR_11, VAR_17 + VAR_0);
      VAR_24 = FUNC_3 (VAR_11, VAR_17 + VAR_6);

      FUNC_6 ("\n%-6d ", VAR_14);


      VAR_19 = FUNC_1 (VAR_21);
      if (VAR_19 != ((void*)0))
 FUNC_6 ("%-6s", VAR_19);
      else if (VAR_21 == VAR_1)
 FUNC_6 ("HdrSym");
      else
 FUNC_6 ("%-6d", VAR_21);
      FUNC_6 (" %-6d %-6d ", VAR_22, VAR_23);
      FUNC_5 (VAR_11, VAR_24);
      FUNC_6 (" %-6lu", VAR_20);




      if (VAR_21 == VAR_1)
 {
   VAR_15 = VAR_16;
   VAR_16 += VAR_24;
 }
      else
 {


   if ((VAR_20 + VAR_15) < VAR_9)
     FUNC_6 (" %s", &VAR_10[VAR_20 + VAR_15]);
   else
     FUNC_6 (" *");
 }
    }
  FUNC_6 ("\n\n");
  *VAR_13 = VAR_16;
}
