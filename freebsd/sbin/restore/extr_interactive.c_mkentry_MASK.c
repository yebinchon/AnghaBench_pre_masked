
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_flags; } ;
struct direct {int d_type; int d_ino; int d_name; } ;
struct afile {char* fname; int len; char prefix; char postfix; int fnum; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char) ;
 struct entry* FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(char *VAR_6, struct direct *VAR_7, struct afile *VAR_8)
{
 char *VAR_9;
 struct entry *VAR_10;

 VAR_8->fnum = VAR_7->d_ino;
 VAR_8->fname = FUNC_5(VAR_7->d_name);
 for (VAR_9 = VAR_8->fname; *VAR_9; VAR_9++)
  if (!VAR_5 && !FUNC_3((unsigned char)*VAR_9))
   *VAR_9 = '?';
 VAR_8->len = VAR_9 - VAR_8->fname;
 if (VAR_2 && FUNC_0(VAR_8->fnum, VAR_3) == 0)
  VAR_8->prefix = '^';
 else if ((VAR_10 = FUNC_4(VAR_6)) != ((void*)0) && (VAR_10->e_flags & VAR_0))
  VAR_8->prefix = '*';
 else
  VAR_8->prefix = ' ';
 switch(VAR_7->d_type) {

 default:
  FUNC_1(VAR_4, "Warning: undefined file type %d\n",
      VAR_7->d_type);

 case 131:
  VAR_8->postfix = ' ';
  break;

 case 132:
  VAR_8->postfix = '@';
  break;

 case 133:
 case 130:
  VAR_8->postfix = '=';
  break;

 case 135:
 case 136:
  VAR_8->postfix = '#';
  break;

 case 128:
  VAR_8->postfix = '%';
  break;

 case 129:
 case 134:
  if (FUNC_2(VAR_7->d_ino) == VAR_1)
   VAR_8->postfix = '/';
  else
   VAR_8->postfix = ' ';
  break;
 }
 return;
}
