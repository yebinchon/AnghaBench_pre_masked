
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
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_4 ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*,unsigned char*,int ,int) ;
 int FUNC_8 (int *,TYPE_1__*,int) ;
 int FUNC_9 (int *,void*,scalar_t__) ;
 int FUNC_10 (unsigned char*,int ,int) ;
 TYPE_5__* VAR_6 ;
 int FUNC_11 (int *,int ,int ,int) ;
 TYPE_1__* FUNC_12 (int *,char*,int ,int) ;
 int FUNC_13 (int *,int ,char const*,char*,TYPE_1__*,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*,char*,int) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* FUNC_16 (int) ;

__attribute__((used)) static bfd *
FUNC_17 (const char *VAR_10, bfd *VAR_11)
{

  asection *VAR_12;
  unsigned char *VAR_13;
  char *VAR_14;
  bfd *VAR_15;

  VAR_14 = FUNC_16 (20);
  FUNC_15 (VAR_14, "nmth%06d.o", VAR_9);
  VAR_9++;

  VAR_15 = FUNC_1 (VAR_14, VAR_11);
  FUNC_2 (VAR_6->object_target, VAR_15);
  FUNC_4 (VAR_15);

  FUNC_6 (VAR_15, VAR_5);
  FUNC_5 (VAR_15, VAR_6->bfd_arch, 0);

  VAR_7 = 0;
  VAR_8 = FUNC_16 (3 * sizeof (asymbol *));
  VAR_12 = FUNC_12 (VAR_15, ".idata$4", VAR_3, 2);
  FUNC_13 (VAR_15, FUNC_0 ("_nm_thnk_"), VAR_10, "", VAR_12, VAR_1, 0);
  FUNC_13 (VAR_15, FUNC_0 ("_nm_"), VAR_10, "", VAR_4, VAR_1, 0);


  FUNC_8 (VAR_15, VAR_12, VAR_2 * 2);
  VAR_13 = FUNC_16 (VAR_2 * 2);
  VAR_12->contents = VAR_13;
  FUNC_10 (VAR_13, 0, VAR_2 * 2);
  FUNC_11 (VAR_15, 0, VAR_0, 2);
  FUNC_14 (VAR_12);

  FUNC_9 (VAR_15, VAR_8, VAR_7);

  FUNC_7 (VAR_15, VAR_12, VAR_13, 0, VAR_2 * 2);

  FUNC_3 (VAR_15);
  return VAR_15;
}
