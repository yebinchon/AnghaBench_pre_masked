
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
typedef void* TYPE_TARGET_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* FUNC_0 (int ,int,int ,char*,struct objfile*) ;

__attribute__((used)) static void
FUNC_1 (void)
{
  VAR_24 =
    FUNC_0 (VAR_10, 1,
        0,
        "VOID", (struct objfile *) ((void*)0));

  VAR_12 =
    FUNC_0 (VAR_9, VAR_0 / VAR_0,
        0,
        "character", (struct objfile *) ((void*)0));

  VAR_19 =
    FUNC_0 (VAR_6, VAR_0 / VAR_0,
        VAR_11,
        "logical*1", (struct objfile *) ((void*)0));

  VAR_17 =
    FUNC_0 (VAR_9, VAR_5 / VAR_0,
        0,
        "integer*2", (struct objfile *) ((void*)0));

  VAR_20 =
    FUNC_0 (VAR_6, VAR_5 / VAR_0,
        VAR_11,
        "logical*2", (struct objfile *) ((void*)0));

  VAR_16 =
    FUNC_0 (VAR_9, VAR_3 / VAR_0,
        0,
        "integer", (struct objfile *) ((void*)0));

  VAR_18 =
    FUNC_0 (VAR_6, VAR_3 / VAR_0,
        VAR_11,
        "logical*4", (struct objfile *) ((void*)0));

  VAR_21 =
    FUNC_0 (VAR_8, VAR_2 / VAR_0,
        0,
        "real", (struct objfile *) ((void*)0));

  VAR_23 =
    FUNC_0 (VAR_8, VAR_1 / VAR_0,
        0,
        "real*8", (struct objfile *) ((void*)0));

  VAR_22 =
    FUNC_0 (VAR_8, VAR_4 / VAR_0,
        0,
        "real*16", (struct objfile *) ((void*)0));

  VAR_15 =
    FUNC_0 (VAR_7, 2 * VAR_2 / VAR_0,
        0,
        "complex*8", (struct objfile *) ((void*)0));
  TYPE_TARGET_TYPE (VAR_25) = VAR_21;

  VAR_13 =
    FUNC_0 (VAR_7, 2 * VAR_1 / VAR_0,
        0,
        "complex*16", (struct objfile *) ((void*)0));
  TYPE_TARGET_TYPE (VAR_26) = VAR_23;




  VAR_14 =
    FUNC_0 (VAR_7, 2 * VAR_4 / VAR_0,
        0,
        "complex*32", (struct objfile *) ((void*)0));
  TYPE_TARGET_TYPE (VAR_27) = VAR_22;
}
