
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uchar ;
typedef int cppchar_t ;
struct TYPE_4__ {int hash_table; } ;
typedef TYPE_1__ cpp_reader ;
typedef int cpp_hashnode ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (char const) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (int,char**,size_t*) ;

cpp_hashnode *
FUNC_7 (cpp_reader *VAR_3, const uchar *VAR_4, size_t VAR_5)
{


  uchar * VAR_6 = (uchar *) FUNC_2 (VAR_5 + 1);
  uchar * VAR_7 = VAR_6;
  size_t VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
    if (VAR_4[VAR_8] != '\\')
      *VAR_7++ = VAR_4[VAR_8];
    else
      {
 unsigned VAR_9 = VAR_4[VAR_8+1] == 'u' ? 4 : 8;
 cppchar_t VAR_10 = 0;
 size_t VAR_11 = VAR_5 - (VAR_7 - VAR_6);
 int VAR_12;

 VAR_8 += 2;
 while (VAR_9 && VAR_8 < VAR_5 && FUNC_1 (VAR_4[VAR_8]))
   {
     VAR_10 = (VAR_10 << 4) + FUNC_4 (VAR_4[VAR_8]);
     VAR_8++;
     VAR_9--;
   }
 VAR_8--;



 if (VAR_10 == 0x24)
   {
     *VAR_7++ = '$';
     continue;
   }

 VAR_12 = FUNC_6 (VAR_10, &VAR_7, &VAR_11);
 if (VAR_12)
   {
     VAR_2 = VAR_12;
     FUNC_3 (VAR_3, VAR_0,
         "converting UCN to source character set");
     break;
   }
      }

  return FUNC_0 (FUNC_5 (VAR_3->hash_table,
      VAR_6, VAR_7 - VAR_6, VAR_1));
}
