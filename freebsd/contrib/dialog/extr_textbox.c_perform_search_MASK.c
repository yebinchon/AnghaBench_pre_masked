
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int end_reached; int begin_reached; long page_length; long in_buf; long fd_bytes_read; int text; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 long FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,long) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static bool
FUNC_9(MY_OBJ * VAR_9, int VAR_10, int VAR_11, int VAR_12, char *VAR_13)
{
    int VAR_14;
    long VAR_15;
    long VAR_16;
    int VAR_17;
    bool VAR_18;
    bool VAR_19, VAR_20;
    bool VAR_21 = VAR_3;


    VAR_14 = (VAR_12 == '/' || VAR_12 == 'n') ? 1 : 0;
    if (VAR_14 ? !VAR_9->end_reached : !VAR_9->begin_reached) {
 if (VAR_12 == 'n' || VAR_12 == 'N') {
     if (VAR_13[0] == '\0') {
  (void) FUNC_1();
  return VAR_3;
     }

 } else if ((VAR_17 = FUNC_4(VAR_9->text, VAR_13,
          VAR_5,
          VAR_6)) != VAR_2
     || VAR_13[0] == '\0') {
     FUNC_2(VAR_9->text, VAR_8);
     FUNC_0(VAR_9, VAR_9->page_length);
     return VAR_7;
 }

 VAR_15 = VAR_9->in_buf;
 VAR_19 = VAR_9->begin_reached;
 VAR_20 = VAR_9->end_reached;
 VAR_16 = FUNC_3(VAR_9) - VAR_9->fd_bytes_read;


 FUNC_0(VAR_9, (VAR_14
    ? VAR_9->page_length - 1
    : VAR_9->page_length + 1));
 if (VAR_14) {
     while ((VAR_18 = FUNC_6(VAR_9, VAR_13)) == VAR_3) {
  if (VAR_9->end_reached)
      break;
     }
 } else {
     while ((VAR_18 = FUNC_6(VAR_9, VAR_13)) == VAR_3) {
  if (VAR_9->begin_reached)
      break;
  FUNC_0(VAR_9, 2L);
     }
 }
 if (VAR_18 == VAR_3) {
     (void) FUNC_1();

     FUNC_5(VAR_9, VAR_16);

     FUNC_7(VAR_9, VAR_0);

     VAR_9->in_buf = VAR_15;
     VAR_9->begin_reached = VAR_19;
     VAR_9->end_reached = VAR_20;




     FUNC_0(VAR_9, VAR_9->page_length);
 } else {
     FUNC_0(VAR_9, 1L);
 }

 FUNC_2(VAR_9->text, VAR_8);
 VAR_21 = VAR_7;
    } else {
 (void) FUNC_1();
    }
    return VAR_21;
}
