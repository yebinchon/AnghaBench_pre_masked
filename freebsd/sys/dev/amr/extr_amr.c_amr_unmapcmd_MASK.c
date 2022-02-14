
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amr_command {int ac_flags; int ac_datamap; int ac_tag; int * ac_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct amr_command *VAR_5)
{
    int VAR_6;

    FUNC_2(3);


    if (VAR_5->ac_flags & VAR_2) {

 if (VAR_5->ac_data != ((void*)0)) {

     VAR_6 = 0;
     if (VAR_5->ac_flags & VAR_0)
  VAR_6 |= VAR_3;
     if (VAR_5->ac_flags & VAR_1)
  VAR_6 |= VAR_4;

     FUNC_0(VAR_5->ac_tag, VAR_5->ac_datamap, VAR_6);
     FUNC_1(VAR_5->ac_tag, VAR_5->ac_datamap);
 }

 VAR_5->ac_flags &= ~VAR_2;
    }
}
