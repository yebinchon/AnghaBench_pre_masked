
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd ;
typedef int asymbol ;
struct TYPE_7__ {unsigned char* contents; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int bfd_arch; int object_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 int FUNC_9 (int *,void*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (unsigned char*,int ,int) ;
 TYPE_4__* VAR_7 ;
 TYPE_1__* FUNC_11 (int *,char*,int ,int) ;
 int FUNC_12 (int *,int ,int ,char*,TYPE_1__*,int ,int ) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* FUNC_16 (int) ;

__attribute__((used)) static bfd *
FUNC_17 (bfd *VAR_11)
{
  asection *VAR_12, *VAR_13, *VAR_14;
  unsigned char *VAR_15, *VAR_16, *VAR_17;
  int VAR_18;
  char *VAR_19;
  bfd *VAR_20;

  VAR_19 = FUNC_16 (20);
  FUNC_13 (VAR_19, "d%06d.o", VAR_10);
  VAR_10++;

  VAR_20 = FUNC_1 (VAR_19, VAR_11);
  FUNC_2 (VAR_7->object_target, VAR_20);
  FUNC_4 (VAR_20);

  FUNC_6 (VAR_20, VAR_4);
  FUNC_5 (VAR_20, VAR_7->bfd_arch, 0);

  VAR_8 = 0;
  VAR_9 = FUNC_16 (5 * sizeof (asymbol *));
  VAR_12 = FUNC_11 (VAR_20, ".idata$4", VAR_3, 2);
  VAR_13 = FUNC_11 (VAR_20, ".idata$5", VAR_3, 2);
  VAR_14 = FUNC_11 (VAR_20, ".idata$7", VAR_3, 2);
  FUNC_12 (VAR_20, FUNC_0 (""), VAR_6, "_iname", VAR_14, VAR_0, 0);

  FUNC_8 (VAR_20, VAR_12, VAR_1);
  VAR_15 = FUNC_16 (VAR_1);
  VAR_12->contents = VAR_15;
  FUNC_10 (VAR_15, 0, VAR_1);

  FUNC_8 (VAR_20, VAR_13, VAR_2);
  VAR_16 = FUNC_16 (VAR_2);
  VAR_13->contents = VAR_16;
  FUNC_10 (VAR_16, 0, VAR_2);

  VAR_18 = FUNC_15 (VAR_5) + 1;
  if (VAR_18 & 1)
    VAR_18++;
  FUNC_8 (VAR_20, VAR_14, VAR_18);
  VAR_17 = FUNC_16 (VAR_18);
  VAR_14->contents = VAR_17;
  FUNC_14 ((char *) VAR_17, VAR_5);



  VAR_17[VAR_18 - 1] = 0;

  FUNC_9 (VAR_20, VAR_9, VAR_8);

  FUNC_7 (VAR_20, VAR_12, VAR_15, 0, VAR_1);
  FUNC_7 (VAR_20, VAR_13, VAR_16, 0, VAR_2);
  FUNC_7 (VAR_20, VAR_14, VAR_17, 0, VAR_18);

  FUNC_3 (VAR_20);
  return VAR_20;
}
