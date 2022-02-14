
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_object {int lo_flags; char const* lo_name; } ;
struct lock_class {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct lock_object*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct lock_object*,char const*) ;
 struct lock_class** VAR_4 ;
 int FUNC_3 (struct lock_object*) ;

void
FUNC_4(struct lock_object *VAR_5, struct lock_class *VAR_6, const char *VAR_7,
    const char *VAR_8, int VAR_9)
{
 int VAR_10;


 FUNC_0(VAR_9 & VAR_3 || !FUNC_3(VAR_5),
     ("lock \"%s\" %p already initialized", VAR_7, VAR_5));


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  if (VAR_4[VAR_10] == VAR_6) {
   VAR_5->lo_flags = VAR_10 << VAR_1;
   break;
  }
 FUNC_0(VAR_10 < VAR_0, ("unknown lock class %p", VAR_6));


 VAR_5->lo_name = VAR_7;
 VAR_5->lo_flags |= VAR_9 | VAR_2;
 FUNC_1(VAR_5, 0);
 FUNC_2(VAR_5, (VAR_8 != ((void*)0)) ? VAR_8 : VAR_7);
}
