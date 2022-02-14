
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int windres_bfd ;
typedef int unichar ;
struct TYPE_17__ {TYPE_8__* var; TYPE_10__* fixed; } ;
typedef TYPE_5__ rc_versioninfo ;
struct TYPE_18__ {struct TYPE_18__* next; void* charset; void* language; } ;
typedef TYPE_6__ rc_ver_varinfo ;
struct TYPE_19__ {struct TYPE_19__* next; int value; int * key; } ;
typedef TYPE_7__ rc_ver_stringinfo ;
struct TYPE_14__ {TYPE_6__* var; int * key; } ;
struct TYPE_13__ {TYPE_7__* strings; int * language; } ;
struct TYPE_15__ {TYPE_2__ var; TYPE_1__ string; } ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_3__ u; int type; } ;
typedef TYPE_8__ rc_ver_info ;
typedef unsigned int rc_uint_type ;
struct TYPE_16__ {TYPE_5__* versioninfo; } ;
struct TYPE_21__ {TYPE_4__ u; int type; } ;
typedef TYPE_9__ rc_res_resource ;
struct TYPE_12__ {void* file_date_ls; void* file_date_ms; void* file_subtype; void* file_type; void* file_os; void* file_flags; void* file_flags_mask; void* product_version_ls; void* product_version_ms; void* file_version_ls; void* file_version_ms; } ;
typedef TYPE_10__ rc_fixed_versioninfo ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int *,int const*,unsigned int,unsigned int*) ;
 int FUNC_3 (int *,int const*,unsigned int,char const*,int **,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int *,int const*,int) ;
 void* FUNC_7 (int *,int const*,int) ;

__attribute__((used)) static rc_res_resource *
FUNC_8 (windres_bfd *VAR_3, const bfd_byte *VAR_4, rc_uint_type VAR_5)
{
  rc_uint_type VAR_6, VAR_7, VAR_8, VAR_9;
  rc_fixed_versioninfo *VAR_10;
  rc_ver_info *VAR_11, **VAR_12;
  rc_versioninfo *VAR_13;
  rc_res_resource *VAR_14;

  FUNC_3 (VAR_3, VAR_4, VAR_5, "VS_VERSION_INFO",
        (unichar **) ((void*)0), &VAR_6, &VAR_7, &VAR_8, &VAR_9);

  if ((unsigned int) VAR_6 != VAR_5)
    FUNC_1 (FUNC_0("version length %d does not match resource length %lu"),
    (int) VAR_6, (unsigned long) VAR_5);

  if (VAR_8 != 0)
    FUNC_1 (FUNC_0("unexpected version type %d"), (int) VAR_8);

  VAR_4 += VAR_9;
  VAR_5 -= VAR_9;

  if (VAR_7 == 0)
    VAR_10 = ((void*)0);
  else
    {
      unsigned long VAR_15, VAR_16;

      if (VAR_7 != 52)
 FUNC_1 (FUNC_0("unexpected fixed version information length %ld"), (long) VAR_7);

      if (VAR_5 < 52)
 FUNC_5 (FUNC_0("fixed version info"));

      VAR_15 = FUNC_7 (VAR_3, VAR_4, 4);
      if (VAR_15 != 0xfeef04bd)
 FUNC_1 (FUNC_0("unexpected fixed version signature %lu"), VAR_15);

      VAR_16 = FUNC_7 (VAR_3, VAR_4 + 4, 4);
      if (VAR_16 != 0 && VAR_16 != 0x10000)
 FUNC_1 (FUNC_0("unexpected fixed version info version %lu"), VAR_16);

      VAR_10 = (rc_fixed_versioninfo *) FUNC_4 (sizeof (rc_fixed_versioninfo));

      VAR_10->file_version_ms = FUNC_7 (VAR_3, VAR_4 + 8, 4);
      VAR_10->file_version_ls = FUNC_7 (VAR_3, VAR_4 + 12, 4);
      VAR_10->product_version_ms = FUNC_7 (VAR_3, VAR_4 + 16, 4);
      VAR_10->product_version_ls = FUNC_7 (VAR_3, VAR_4 + 20, 4);
      VAR_10->file_flags_mask = FUNC_7 (VAR_3, VAR_4 + 24, 4);
      VAR_10->file_flags = FUNC_7 (VAR_3, VAR_4 + 28, 4);
      VAR_10->file_os = FUNC_7 (VAR_3, VAR_4 + 32, 4);
      VAR_10->file_type = FUNC_7 (VAR_3, VAR_4 + 36, 4);
      VAR_10->file_subtype = FUNC_7 (VAR_3, VAR_4 + 40, 4);
      VAR_10->file_date_ms = FUNC_7 (VAR_3, VAR_4 + 44, 4);
      VAR_10->file_date_ls = FUNC_7 (VAR_3, VAR_4 + 48, 4);

      VAR_4 += 52;
      VAR_5 -= 52;
    }

  VAR_11 = ((void*)0);
  VAR_12 = &VAR_11;

  while (VAR_5 > 0)
    {
      rc_ver_info *VAR_17;
      int VAR_18;

      if (VAR_5 < 8)
 FUNC_5 (FUNC_0("version var info"));

      VAR_17 = (rc_ver_info *) FUNC_4 (sizeof (rc_ver_info));

      VAR_18 = FUNC_6 (VAR_3, VAR_4 + 6, 2);

      if (VAR_18 == 'S')
 {
   rc_ver_stringinfo **VAR_19;

   VAR_17->type = VAR_1;

   FUNC_3 (VAR_3, VAR_4, VAR_5, "StringFileInfo",
         (unichar **) ((void*)0), &VAR_6, &VAR_7, &VAR_8,
         &VAR_9);

   if (VAR_7 != 0)
     FUNC_1 (FUNC_0("unexpected stringfileinfo value length %ld"), (long) VAR_7);

   VAR_4 += VAR_9;
   VAR_5 -= VAR_9;

   FUNC_3 (VAR_3, VAR_4, VAR_5, (const char *) ((void*)0),
         &VAR_17->u.string.language, &VAR_6, &VAR_7,
         &VAR_8, &VAR_9);

   if (VAR_7 != 0)
     FUNC_1 (FUNC_0("unexpected version stringtable value length %ld"), (long) VAR_7);

   VAR_4 += VAR_9;
   VAR_5 -= VAR_9;
   VAR_6 -= VAR_9;

   VAR_17->u.string.strings = ((void*)0);
   VAR_19 = &VAR_17->u.string.strings;



   VAR_6 = (VAR_6 + 3) &~ 3;

   while (VAR_6 > 0)
     {
       rc_ver_stringinfo *VAR_20;
       rc_uint_type VAR_21, VAR_22, VAR_23;

       VAR_20 = (rc_ver_stringinfo *) FUNC_4 (sizeof *VAR_20);

       FUNC_3 (VAR_3, VAR_4, VAR_5,
      (const char *) ((void*)0), &VAR_20->key, &VAR_21,
      &VAR_7, &VAR_8, &VAR_9);

       VAR_21 = (VAR_21 + 3) &~ 3;

       VAR_4 += VAR_9;
       VAR_5 -= VAR_9;

       VAR_20->value = FUNC_2 (VAR_3, VAR_4, VAR_5, &VAR_22);
       VAR_23 = VAR_22 * 2 + 2;
       VAR_23 = (VAR_23 + 3) &~ 3;

       if (VAR_9 + VAR_23 != VAR_21)
  FUNC_1 (FUNC_0("unexpected version string length %ld != %ld + %ld"),
         (long) VAR_21, (long) VAR_9, (long) VAR_23);

       VAR_20->next = ((void*)0);
       *VAR_19 = VAR_20;
       VAR_19 = &VAR_20->next;

       VAR_4 += VAR_23;
       VAR_5 -= VAR_23;

       if (VAR_6 < VAR_21)
  FUNC_1 (FUNC_0("unexpected version string length %ld < %ld"),
         (long) VAR_6, (long) VAR_21);

       VAR_6 -= VAR_21;
     }
 }
      else if (VAR_18 == 'V')
 {
   rc_ver_varinfo **VAR_24;

   VAR_17->type = VAR_2;

   FUNC_3 (VAR_3, VAR_4, VAR_5, "VarFileInfo",
         (unichar **) ((void*)0), &VAR_6, &VAR_7, &VAR_8,
         &VAR_9);

   if (VAR_7 != 0)
     FUNC_1 (FUNC_0("unexpected varfileinfo value length %ld"), (long) VAR_7);

   VAR_4 += VAR_9;
   VAR_5 -= VAR_9;

   FUNC_3 (VAR_3, VAR_4, VAR_5, (const char *) ((void*)0),
         &VAR_17->u.var.key, &VAR_6, &VAR_7, &VAR_8, &VAR_9);

   VAR_4 += VAR_9;
   VAR_5 -= VAR_9;

   VAR_17->u.var.var = ((void*)0);
   VAR_24 = &VAR_17->u.var.var;

   while (VAR_7 > 0)
     {
       rc_ver_varinfo *VAR_25;

       if (VAR_5 < 4)
  FUNC_5 (FUNC_0("version varfileinfo"));

       VAR_25 = (rc_ver_varinfo *) FUNC_4 (sizeof (rc_ver_varinfo));

       VAR_25->language = FUNC_6 (VAR_3, VAR_4, 2);
       VAR_25->charset = FUNC_6 (VAR_3, VAR_4 + 2, 2);

       VAR_25->next = ((void*)0);
       *VAR_24 = VAR_25;
       VAR_24 = &VAR_25->next;

       VAR_4 += 4;
       VAR_5 -= 4;

       if (VAR_7 < 4)
  FUNC_1 (FUNC_0("unexpected version value length %ld"), (long) VAR_7);

       VAR_7 -= 4;
     }
 }
      else
 FUNC_1 (FUNC_0("unexpected version string"));

      VAR_17->next = ((void*)0);
      *VAR_12 = VAR_17;
      VAR_12 = &VAR_17->next;
    }

  VAR_13 = (rc_versioninfo *) FUNC_4 (sizeof (rc_versioninfo));
  VAR_13->fixed = VAR_10;
  VAR_13->var = VAR_11;

  VAR_14 = (rc_res_resource *) FUNC_4 (sizeof *VAR_14);
  VAR_14->type = VAR_0;
  VAR_14->u.versioninfo = VAR_13;

  return VAR_14;
}
