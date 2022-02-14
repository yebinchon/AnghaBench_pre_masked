
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0("Available commands:\n"
     "bye                                Quit sftp\n"
     "cd path                            Change remote directory to 'path'\n"
     "chgrp grp path                     Change group of file 'path' to 'grp'\n"
     "chmod mode path                    Change permissions of file 'path' to 'mode'\n"
     "chown own path                     Change owner of file 'path' to 'own'\n"
     "df [-hi] [path]                    Display statistics for current directory or\n"
     "                                   filesystem containing 'path'\n"
     "exit                               Quit sftp\n"
     "get [-afPpRr] remote [local]       Download file\n"
     "reget [-fPpRr] remote [local]      Resume download file\n"
     "reput [-fPpRr] [local] remote      Resume upload file\n"
     "help                               Display this help text\n"
     "lcd path                           Change local directory to 'path'\n"
     "lls [ls-options [path]]            Display local directory listing\n"
     "lmkdir path                        Create local directory\n"
     "ln [-s] oldpath newpath            Link remote file (-s for symlink)\n"
     "lpwd                               Print local working directory\n"
     "ls [-1afhlnrSt] [path]             Display remote directory listing\n"
     "lumask umask                       Set local umask to 'umask'\n"
     "mkdir path                         Create remote directory\n"
     "progress                           Toggle display of progress meter\n"
     "put [-afPpRr] local [remote]       Upload file\n"
     "pwd                                Display remote working directory\n"
     "quit                               Quit sftp\n"
     "rename oldpath newpath             Rename remote file\n"
     "rm path                            Delete remote file\n"
     "rmdir path                         Remove remote directory\n"
     "symlink oldpath newpath            Symlink remote file\n"
     "version                            Show SFTP version\n"
     "!command                           Execute 'command' in local shell\n"
     "!                                  Escape to local shell\n"
     "?                                  Synonym for help\n");
}
