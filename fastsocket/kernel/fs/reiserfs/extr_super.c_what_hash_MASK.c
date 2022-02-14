
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,char*,char*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_5)
{
 __u32 VAR_6;

 VAR_6 = FUNC_8(FUNC_0(VAR_5));





 if (VAR_6 == VAR_3 || FUNC_2(VAR_5))
  VAR_6 = FUNC_1(VAR_5);

 if (VAR_6 != VAR_3 && FUNC_2(VAR_5)) {



  if (FUNC_5(VAR_5) && VAR_6 != VAR_4) {
   FUNC_7(VAR_5, "reiserfs-2507",
      "Error, %s hash detected, "
      "unable to force rupasov hash",
      FUNC_3(VAR_6));
   VAR_6 = VAR_3;
  } else if (FUNC_6(VAR_5) && VAR_6 != VAR_2) {
   FUNC_7(VAR_5, "reiserfs-2508",
      "Error, %s hash detected, "
      "unable to force tea hash",
      FUNC_3(VAR_6));
   VAR_6 = VAR_3;
  } else if (FUNC_4(VAR_5) && VAR_6 != VAR_1) {
   FUNC_7(VAR_5, "reiserfs-2509",
      "Error, %s hash detected, "
      "unable to force r5 hash",
      FUNC_3(VAR_6));
   VAR_6 = VAR_3;
  }
 } else {

  if (FUNC_5(VAR_5)) {
   VAR_6 = VAR_4;
  } else if (FUNC_6(VAR_5)) {
   VAR_6 = VAR_2;
  } else if (FUNC_4(VAR_5)) {
   VAR_6 = VAR_1;
  }
 }




 if (VAR_6 != VAR_3 &&
     !(VAR_5->s_flags & VAR_0) &&
     VAR_6 != FUNC_8(FUNC_0(VAR_5))) {
  FUNC_9(FUNC_0(VAR_5), VAR_6);
 }
 return VAR_6;
}
