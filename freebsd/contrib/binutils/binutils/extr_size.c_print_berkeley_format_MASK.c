
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_8 (bfd *VAR_11)
{
  static int VAR_12 = 0;
  bfd_size_type VAR_13;

  VAR_1 = 0;
  VAR_2 = 0;
  VAR_7 = 0;

  FUNC_1 (VAR_11, VAR_0, ((void*)0));

  if (VAR_12++ == 0)
    FUNC_6 ((VAR_4 == VAR_3) ? "   text\t   data\t    bss\t    oct\t    hex\tfilename" :
   "   text\t   data\t    bss\t    dec\t    hex\tfilename");

  VAR_13 = VAR_7 + VAR_2 + VAR_1;

  if (VAR_5)
    {
      VAR_10 += VAR_7;
      VAR_9 += VAR_2;
      VAR_8 += VAR_1;
    }

  FUNC_7 (7, VAR_7);
  FUNC_5 ('\t');
  FUNC_7 (7, VAR_2);
  FUNC_5 ('\t');
  FUNC_7 (7, VAR_1);
  FUNC_4 (((VAR_4 == VAR_3) ? "\t%7lo\t%7lx\t" : "\t%7lu\t%7lx\t"),
   (unsigned long) VAR_13, (unsigned long) VAR_13);

  FUNC_3 (FUNC_0 (VAR_11), VAR_6);

  if (FUNC_2 (VAR_11))
    FUNC_4 (" (ex %s)", FUNC_0 (FUNC_2 (VAR_11)));
}
