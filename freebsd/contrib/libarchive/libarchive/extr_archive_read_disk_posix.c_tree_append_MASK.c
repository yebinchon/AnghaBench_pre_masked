
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_7__ {char* s; size_t length; } ;
struct tree {size_t dirname_length; char* basename; TYPE_1__ restore_time; TYPE_2__ path; } ;


 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct tree *VAR_0, const char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_0->path.s[VAR_0->dirname_length] = '\0';
 VAR_0->path.length = VAR_0->dirname_length;

 while (VAR_2 > 1 && VAR_1[VAR_2 - 1] == '/')
  VAR_2--;


 VAR_3 = VAR_2 + VAR_0->dirname_length + 2;
 FUNC_1(&VAR_0->path, VAR_3);

 if (VAR_0->dirname_length > 0 && VAR_0->path.s[FUNC_2(&VAR_0->path)-1] != '/')
  FUNC_0(&VAR_0->path, '/');
 VAR_0->basename = VAR_0->path.s + FUNC_2(&VAR_0->path);
 FUNC_3(&VAR_0->path, VAR_1, VAR_2);
 VAR_0->restore_time.name = VAR_0->basename;
}
