
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vdd {TYPE_1__* pathtbl; } ;
struct isoent {size_t id_len; int * identifier; TYPE_2__* parent; int dir_location; } ;
struct archive_write {int dummy; } ;
struct TYPE_4__ {int dir_number; } ;
struct TYPE_3__ {int cnt; struct isoent** sorted; } ;


 int FUNC_0 (unsigned char*,int *,size_t) ;
 int FUNC_1 (unsigned char*,unsigned char) ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,int ) ;
 unsigned char* FUNC_6 (struct archive_write*) ;
 int FUNC_7 (struct archive_write*,int) ;
 size_t FUNC_8 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_9(struct archive_write *VAR_0, int VAR_1, int VAR_2,
    struct vdd *VAR_3)
{
 unsigned char *VAR_4, *VAR_5;
 struct isoent **VAR_6;
 size_t VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_3->pathtbl[VAR_2].cnt == 0)
  return (0);

 VAR_10 = 0;
 VAR_5 = FUNC_6(VAR_0);
 VAR_7 = FUNC_8(VAR_0);
 VAR_4 = VAR_5 - 1;
 VAR_6 = VAR_3->pathtbl[VAR_2].sorted;
 for (VAR_8 = 0; VAR_8 < VAR_3->pathtbl[VAR_2].cnt; VAR_8++) {
  struct isoent *VAR_11;
  size_t VAR_12;

  VAR_11 = VAR_6[VAR_8];
  if (VAR_11->identifier == ((void*)0))
   VAR_12 = 1;
  else
   VAR_12 = VAR_11->id_len;
  if (VAR_7 - ((VAR_4+1) - VAR_5) < (VAR_12 + 1 + 8)) {
   VAR_9 = FUNC_7(VAR_0, (VAR_4+1) - VAR_5);
   if (VAR_9 < 0)
    return (VAR_9);
   VAR_5 = FUNC_6(VAR_0);
   VAR_7 = FUNC_8(VAR_0);
   VAR_4 = VAR_5 -1;
  }

  FUNC_1(VAR_4+1, (unsigned char)VAR_12);

  FUNC_1(VAR_4+2, 0);

  if (VAR_1)
   FUNC_5(VAR_4+3, VAR_11->dir_location);
  else
   FUNC_4(VAR_4+3, VAR_11->dir_location);

  if (VAR_1)
   FUNC_3(VAR_4+7, VAR_11->parent->dir_number);
  else
   FUNC_2(VAR_4+7, VAR_11->parent->dir_number);

  if (VAR_11->identifier == ((void*)0))
   VAR_4[9] = 0;
  else
   FUNC_0(&VAR_4[9], VAR_11->identifier, VAR_12);
  if (VAR_12 & 0x01) {

   VAR_4[9+VAR_12] = 0;
   VAR_12++;
  }
  VAR_10 += 8 + (int)VAR_12;
  VAR_4 += 8 + VAR_12;
 }
 if ((VAR_4 + 1) > VAR_5) {
  VAR_9 = FUNC_7(VAR_0, (VAR_4+1)-VAR_5);
  if (VAR_9 < 0)
   return (VAR_9);
 }
 return (VAR_10);
}
