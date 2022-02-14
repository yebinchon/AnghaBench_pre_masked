
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
 char* FUNC_0 (char*) ;
 int VAR_3 ;
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
 int FUNC_10 (unsigned char*,int ,int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_11 (int *,int,int ,int) ;
 TYPE_1__* FUNC_12 (int *,char*,int ,int) ;
 int FUNC_13 (int *,char*,char const*,char*,int ,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* FUNC_16 (int) ;

__attribute__((used)) static bfd *
FUNC_17 (const char *VAR_9,
    const char *VAR_10,
    const char *VAR_11,
    bfd *VAR_12)
{
  asection *VAR_13;
  unsigned char *VAR_14;
  char *VAR_15;
  bfd *VAR_16;

  VAR_15 = FUNC_16 (20);
  FUNC_15 (VAR_15, "fu%06d.o", VAR_8);
  VAR_8++;

  VAR_16 = FUNC_1 (VAR_15, VAR_12);
  FUNC_2 (VAR_5->object_target, VAR_16);
  FUNC_4 (VAR_16);

  FUNC_6 (VAR_16, VAR_4);
  FUNC_5 (VAR_16, VAR_5->bfd_arch, 0);

  VAR_6 = 0;
  VAR_7 = FUNC_16 (6 * sizeof (asymbol *));
  VAR_13 = FUNC_12 (VAR_16, ".idata$2", VAR_2, 2);

  FUNC_13 (VAR_16, FUNC_0 ("_nm_thnk_"), VAR_9, "", VAR_3, VAR_1, 0);
  FUNC_13 (VAR_16, FUNC_0 (""), VAR_11, "_iname", VAR_3, VAR_1, 0);
  FUNC_13 (VAR_16, "", VAR_10, "", VAR_3, VAR_1, 0);

  FUNC_8 (VAR_16, VAR_13, 20);
  VAR_14 = FUNC_16 (20);
  VAR_13->contents = VAR_14;
  FUNC_10 (VAR_14, 0, 20);

  FUNC_11 (VAR_16, 0, VAR_0, 1);
  FUNC_11 (VAR_16, 12, VAR_0, 2);
  FUNC_11 (VAR_16, 16, VAR_0, 3);
  FUNC_14 (VAR_13);

  FUNC_9 (VAR_16, VAR_7, VAR_6);

  FUNC_7 (VAR_16, VAR_13, VAR_14, 0, 20);

  FUNC_3 (VAR_16);
  return VAR_16;
}
