
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u_int8_t ;
typedef int u_int16_t ;
struct tree_cache {int dummy; } ;
struct packet {TYPE_1__* options; } ;
struct dhcp_packet {unsigned char* options; unsigned char* file; unsigned char* sname; } ;
typedef int priority_list ;
typedef int buffer ;
struct TYPE_2__ {unsigned char* data; int len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 size_t VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned char* VAR_14 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned int) ;
 unsigned int VAR_15 ;
 unsigned int FUNC_2 (unsigned char*,size_t,struct tree_cache**,unsigned char*,unsigned int,size_t,size_t,int) ;

int
FUNC_3(struct packet *VAR_16, struct dhcp_packet *VAR_17,
    int VAR_18, struct tree_cache **VAR_19,
    int VAR_20,
    int VAR_21, int VAR_22, u_int8_t *VAR_23, int VAR_24)
{
 unsigned char VAR_25[300], VAR_26[4096];
 unsigned VAR_27;
 size_t VAR_28;
 unsigned VAR_29, VAR_30, VAR_31;
 int VAR_32;
 if (!VAR_18 &&
     VAR_16 &&
     VAR_16->options[VAR_6].data &&
     (VAR_16->options[VAR_6].len >=
     sizeof(u_int16_t)))
  VAR_18 = FUNC_0(
      VAR_16->options[VAR_6].data);

 if (VAR_18)
  VAR_28 = VAR_18 - VAR_1;
 else if (VAR_22)
  VAR_28 = 64;
 else
  VAR_28 = 576 - VAR_1;

 if (VAR_28 > sizeof(VAR_26))
  VAR_28 = sizeof(VAR_26);


 VAR_27 = 0;
 VAR_25[VAR_27++] = VAR_8;
 VAR_25[VAR_27++] = VAR_11;
 VAR_25[VAR_27++] = VAR_5;
 VAR_25[VAR_27++] = VAR_7;






 if (VAR_16 &&
     VAR_16->options[VAR_10].data) {
  unsigned VAR_33 =
      VAR_16->options[VAR_10].len;
  if (VAR_33 + VAR_27 > sizeof(VAR_25))
   VAR_33 = sizeof(VAR_25) - VAR_27;

  FUNC_1(&VAR_25[VAR_27],
      VAR_16->options[VAR_10].data,
      VAR_33);
  VAR_27 += VAR_33;
  VAR_23 = VAR_25;
 } else if (VAR_23) {
  if (VAR_24 + VAR_27 > sizeof(VAR_25))
   VAR_24 = sizeof(VAR_25) - VAR_27;

  FUNC_1(&VAR_25[VAR_27], VAR_23, VAR_24);
  VAR_27 += VAR_24;
  VAR_23 = VAR_25;
 } else {
  FUNC_1(&VAR_25[VAR_27],
      VAR_14,
      VAR_15);
  VAR_27 += VAR_15;
 }


 VAR_29 = FUNC_2(
     VAR_26,
     (VAR_28 - 7 + ((VAR_20 & 1) ? VAR_0 : 0) +
  ((VAR_20 & 2) ? VAR_4 : 0)),
     VAR_19, VAR_25, VAR_27, VAR_28,
     (VAR_28 + ((VAR_20 & 1) ? VAR_0 : 0)),
     VAR_21);


 FUNC_1(VAR_17->options, VAR_3, 4);
 VAR_31 = 4;






 if (VAR_29 <= VAR_28 - VAR_31) {
  FUNC_1(&VAR_17->options[VAR_31],
      VAR_26, VAR_29);
  VAR_31 += VAR_29;
  if (VAR_31 < VAR_28)
   VAR_17->options[VAR_31++] = VAR_12;
  VAR_32 = VAR_2 + VAR_31;
 } else {
  VAR_17->options[VAR_31++] = VAR_9;
  VAR_17->options[VAR_31++] = 1;
  if (VAR_29 >
      VAR_28 - VAR_31 + VAR_0)
   VAR_17->options[VAR_31++] = 3;
  else
   VAR_17->options[VAR_31++] = 1;

  FUNC_1(&VAR_17->options[VAR_31],
      VAR_26, VAR_28 - VAR_31);
  VAR_30 = VAR_28 - VAR_31;
  VAR_32 = VAR_2 + VAR_31;
  if (VAR_20 & 1) {
   if (VAR_29 - VAR_30 <= VAR_0) {
    FUNC_1(VAR_17->file,
        &VAR_26[VAR_30], VAR_29 - VAR_30);
    VAR_31 = VAR_29 - VAR_30;
    if (VAR_31 < VAR_0)
     VAR_17->file[VAR_31++] = (char)VAR_12;
    while (VAR_31 < VAR_0)
     VAR_17->file[VAR_31++] = (char)VAR_13;
   } else {
    FUNC_1(VAR_17->file,
        &VAR_26[VAR_30], VAR_0);
    VAR_30 += VAR_0;
   }
  }
  if ((VAR_20 & 2) && VAR_29 < VAR_30) {
   FUNC_1(VAR_17->sname,
       &VAR_26[VAR_30], VAR_29 - VAR_30);

   VAR_31 = VAR_29 - VAR_30;
   if (VAR_31 < VAR_4)
    VAR_17->file[VAR_31++] = (char)VAR_12;
   while (VAR_31 < VAR_4)
    VAR_17->file[VAR_31++] = (char)VAR_13;
  }
 }
 return (VAR_32);
}
