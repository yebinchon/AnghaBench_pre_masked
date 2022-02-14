
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_spcl {scalar_t__ c_magic; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long FUNC_2 (int ,int *,long) ;
 long FUNC_3 (int *,long) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_4 (int ) ;
 int * VAR_9 ;
 int FUNC_5 (int ,char*,long) ;

__attribute__((used)) static void
FUNC_6(void)
{
 long VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  ((struct s_spcl *)&VAR_9[VAR_10 * VAR_0])->c_magic = 0;
 VAR_1 = 0;





  VAR_10 = FUNC_2(VAR_4, VAR_9, VAR_5 * VAR_0);

 if (VAR_10 <= 0) {
  FUNC_1(VAR_7, "tape read error: %s\n", FUNC_4(VAR_2));
  FUNC_0(1);
 }
 if (VAR_10 % VAR_0 != 0) {
  FUNC_1(VAR_7, "Tape block size (%ld) %s (%ld)\n",
   VAR_10, "is not a multiple of dump block size", VAR_0);
  FUNC_0(1);
 }
 VAR_5 = VAR_10 / VAR_0;
 VAR_6 = VAR_5;
 FUNC_5(VAR_8, "Tape block size is %ld\n", VAR_5);
}
