
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfilioc_link {int pio_ruleset; int pio_module; int pio_name; scalar_t__ pio_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,struct pfilioc_link*) ;
 scalar_t__ VAR_6 ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_7, char *VAR_8[])
{
 struct pfilioc_link VAR_9;
 int VAR_10;
 char *VAR_11;

 if (VAR_8[0][0] == 'u')
  VAR_9.pio_flags = VAR_4;
 else
  VAR_9.pio_flags = 0;

 while ((VAR_10 = FUNC_2(VAR_7, VAR_8, "ioa")) != -1)
  switch (VAR_10) {
  case 'i':
   VAR_9.pio_flags |= VAR_2;
   break;
  case 'o':
   VAR_9.pio_flags |= VAR_3;
   break;
  case 'a':
   VAR_9.pio_flags |= VAR_1;
   break;
  default:
   FUNC_3();
  }

 if (!FUNC_0(VAR_9.pio_flags))
  FUNC_3();

 VAR_7 -= VAR_6;
 VAR_8 += VAR_6;

 if (VAR_7 != 2)
  FUNC_3();


 if ((VAR_11 = FUNC_5(VAR_8[0], ':')) == ((void*)0))
  FUNC_3();
 *VAR_11 = '\0';
 VAR_11++;

 FUNC_6(VAR_9.pio_name, VAR_8[1], sizeof(VAR_9.pio_name));
 FUNC_6(VAR_9.pio_module, VAR_8[0], sizeof(VAR_9.pio_module));
 FUNC_6(VAR_9.pio_ruleset, VAR_11, sizeof(VAR_9.pio_ruleset));

 if (FUNC_4(VAR_5, VAR_0, &VAR_9) != 0)
  FUNC_1(1, "ioctl(PFILIOC_LINK)");
}
