
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ model; int audio_flags; } ;
typedef TYPE_1__ ad1848_info ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_9(ad1848_info * VAR_7)
{
 int VAR_8;
 int *VAR_9;




 static int VAR_10[] =
 {
  0xa8, 0xa8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
  0x00, 0x0c, 0x02, 0x00, 0x8a, 0x01, 0x00, 0x00,


  0x80, 0x00, 0x10, 0x10, 0x00, 0x00, 0x1f, 0x40,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };

 static int VAR_11[] =
 {
  0xa8, 0xa8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0xe0, 0x01, 0x00, 0x00,
   0x80, 0x00, 0x10, 0x10, 0x00, 0x00, 0x1f, 0x40,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };





 VAR_9 = VAR_10;
 if(VAR_7->model >= VAR_4)
  VAR_9 = VAR_11;

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  FUNC_6(VAR_7, VAR_8, VAR_9[VAR_8]);


 FUNC_3(VAR_7);
 FUNC_5(VAR_7);

 if (VAR_7->model > VAR_3)
 {
  if (VAR_7->model == VAR_2)
   FUNC_6(VAR_7, 12, FUNC_4(VAR_7, 12) | 0x50);
  else
   FUNC_6(VAR_7, 12, FUNC_4(VAR_7, 12) | 0x40);

  if (VAR_7->model == VAR_5)
   FUNC_6(VAR_7, 12, 0x6c);

  if (VAR_7->model != VAR_2)
   for (VAR_8 = 16; VAR_8 < 32; VAR_8++)
    FUNC_6(VAR_7, VAR_8, VAR_9[VAR_8]);

  if (VAR_7->model == VAR_5)
   FUNC_6(VAR_7, 16, 0x30);
 }
 if (VAR_7->model > VAR_3)
 {
  if (VAR_7->audio_flags & VAR_0)
   FUNC_6(VAR_7, 9, FUNC_4(VAR_7, 9) & ~0x04);
  else
   FUNC_6(VAR_7, 9, FUNC_4(VAR_7, 9) | 0x04);

  if (VAR_7->model == VAR_1 || VAR_7->model == VAR_2)
   FUNC_6(VAR_7, 27, FUNC_4(VAR_7, 27) | 0x08);

  if (VAR_7->model == VAR_5)
  {
   FUNC_6(VAR_7, 12, 0x6c);
   FUNC_6(VAR_7, 16, 0x30);
   FUNC_6(VAR_7, 17, 0xc2);
  }
 }
 else
 {
    VAR_7->audio_flags &= ~VAR_0;
    FUNC_6(VAR_7, 9, FUNC_4(VAR_7, 9) | 0x04);
    if (VAR_6)
     FUNC_6(VAR_7, 12, FUNC_4(VAR_7, 12) | 0x40);
 }

 FUNC_8((0), FUNC_7(VAR_7));





 FUNC_1(VAR_7);
 FUNC_2(VAR_7);

 FUNC_0(VAR_7);
}
