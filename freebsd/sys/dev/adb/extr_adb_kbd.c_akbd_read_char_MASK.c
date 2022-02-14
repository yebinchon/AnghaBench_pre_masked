
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct adb_kbd_softc {scalar_t__ sc_mode; int* at_buffered_char; int buffers; int* buffer; int sc_mutex; int sc_cv; } ;
typedef int keyboard_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u_int
FUNC_4(keyboard_t *VAR_9, int VAR_10)
{
 struct adb_kbd_softc *VAR_11;
 uint16_t VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 VAR_11 = (struct adb_kbd_softc *)(VAR_9);

 FUNC_2(&VAR_11->sc_mutex);
 if (!VAR_11->buffers && VAR_10)
  FUNC_0(&VAR_11->sc_cv,&VAR_11->sc_mutex);

 if (!VAR_11->buffers) {
  FUNC_3(&VAR_11->sc_mutex);
  return (VAR_2);
 }

 VAR_13 = VAR_11->buffer[0];

 for (VAR_14 = 1; VAR_14 < VAR_11->buffers; VAR_14++)
  VAR_11->buffer[VAR_14-1] = VAR_11->buffer[VAR_14];

 VAR_11->buffers--;
  VAR_12 = VAR_13;


 FUNC_3(&VAR_11->sc_mutex);

 return (VAR_12);
}
