
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bfd ;
typedef int asymbol ;
struct TYPE_9__ {unsigned char* contents; } ;
typedef TYPE_1__ asection ;
struct TYPE_10__ {int bfd_arch; int object_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_5 ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 int FUNC_9 (int *,void*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (unsigned char*,int ,int) ;
 TYPE_5__* VAR_8 ;
 int FUNC_11 (int *,int,int ,int) ;
 TYPE_1__* FUNC_12 (int *,char*,int ,int) ;
 int FUNC_13 (int *,int ,int ,char*,TYPE_1__*,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* FUNC_16 (int) ;

__attribute__((used)) static bfd *
FUNC_17 (bfd *VAR_12)
{
  asection *VAR_13, *VAR_14, *VAR_15;
  unsigned char *VAR_16, *VAR_17, *VAR_18;
  char *VAR_19;
  bfd *VAR_20;

  VAR_19 = FUNC_16 (20);
  FUNC_15 (VAR_19, "d%06d.o", VAR_11);
  VAR_11++;

  VAR_20 = FUNC_1 (VAR_19, VAR_12);
  FUNC_2 (VAR_8->object_target, VAR_20);
  FUNC_4 (VAR_20);

  FUNC_6 (VAR_20, VAR_6);
  FUNC_5 (VAR_20, VAR_8->bfd_arch, 0);

  VAR_9 = 0;
  VAR_10 = FUNC_16 (6 * sizeof (asymbol *));
  VAR_13 = FUNC_12 (VAR_20, ".idata$2", VAR_4, 2);
  VAR_14 = FUNC_12 (VAR_20, ".idata$5", VAR_4, 2);
  VAR_15 = FUNC_12 (VAR_20, ".idata$4", VAR_4, 2);
  FUNC_13 (VAR_20, FUNC_0 ("_head_"), VAR_7, "", VAR_13, VAR_1, 0);
  FUNC_13 (VAR_20, FUNC_0 (""), VAR_7, "_iname", VAR_5, VAR_1, 0);







  FUNC_8 (VAR_20, VAR_13, 20);
  VAR_16 = FUNC_16 (20);
  VAR_13->contents = VAR_16;
  FUNC_10 (VAR_16, 0, 20);
  VAR_16[0] = VAR_16[16] = 4;
  FUNC_11 (VAR_20, 0, VAR_0, 2);
  FUNC_11 (VAR_20, 12, VAR_0, 4);
  FUNC_11 (VAR_20, 16, VAR_0, 1);
  FUNC_14 (VAR_13);

  FUNC_8 (VAR_20, VAR_14, VAR_3);
  VAR_17 = FUNC_16 (VAR_3);
  VAR_14->contents = VAR_17;
  FUNC_10 (VAR_17, 0, VAR_3);

  FUNC_8 (VAR_20, VAR_15, VAR_2);
  VAR_18 = FUNC_16 (VAR_2);
  VAR_15->contents = VAR_18;
  FUNC_10 (VAR_18, 0, VAR_2);

  FUNC_9 (VAR_20, VAR_10, VAR_9);

  FUNC_7 (VAR_20, VAR_13, VAR_16, 0, 20);
  FUNC_7 (VAR_20, VAR_14, VAR_17, 0, VAR_3);
  FUNC_7 (VAR_20, VAR_15, VAR_18, 0, VAR_2);

  FUNC_3 (VAR_20);
  return VAR_20;
}
