
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varobj {int format; } ;
typedef enum varobj_display_formats { ____Placeholder_varobj_display_formats } varobj_display_formats ;







 int FUNC_0 (struct varobj*) ;

enum varobj_display_formats
FUNC_1 (struct varobj *VAR_0,
      enum varobj_display_formats VAR_1)
{
  switch (VAR_1)
    {
    case 129:
    case 132:
    case 131:
    case 130:
    case 128:
      VAR_0->format = VAR_1;
      break;

    default:
      VAR_0->format = FUNC_0 (VAR_0);
    }

  return VAR_0->format;
}
