
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_operations {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct audio_operations** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(int VAR_7, int VAR_8)
{
 struct audio_operations *VAR_9 = VAR_4[VAR_7];

 if (VAR_8 & VAR_3) {
  if (!(VAR_9->flags & VAR_0)) {
   unsigned long VAR_10;

   FUNC_2(VAR_10);


   VAR_9->flags |= VAR_0;

   VAR_5 = VAR_6;
   FUNC_3(0, ((void*)0));
   FUNC_0(VAR_1 | 0x10, VAR_2);

   FUNC_1(VAR_10);
  }
 }
}
