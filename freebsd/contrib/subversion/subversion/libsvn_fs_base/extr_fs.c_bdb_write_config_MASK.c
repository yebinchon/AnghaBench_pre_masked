
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; scalar_t__ config; int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef int dbconfig_options ;
typedef int dbconfig_contents ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;


 scalar_t__ FUNC_1 (void*,char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int ,int ,int ) ;
 void* FUNC_4 (scalar_t__,char const*) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,char const*,int,int ,int ) ;
 int FUNC_7 (int *,char const*,int,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_6)
{
  const char *VAR_7 =
    FUNC_3(VAR_6->path, VAR_3, VAR_6->pool);
  apr_file_t *VAR_8 = ((void*)0);
  int VAR_9;

  static const char VAR_10[] =
    "# This is the configuration file for the Berkeley DB environment\n"
    "# used by your Subversion repository.\n"
    "# You must run 'svnadmin recover' whenever you modify this file,\n"
    "# for your changes to take effect.\n"
    "\n"
    "### Lock subsystem\n"
    "#\n"
    "# Make sure you read the documentation at:\n"
    "#\n"
    "#   http://docs.oracle.com/cd/E17076_02/html/programmer_reference/lock_max.html\n"
    "#\n"
    "# before tweaking these values.\n"
    "#\n"
    "set_lk_max_locks   2000\n"
    "set_lk_max_lockers 2000\n"
    "set_lk_max_objects 2000\n"
    "\n"
    "### Log file subsystem\n"
    "#\n"
    "# Make sure you read the documentation at:\n"
    "#\n"
    "#   http://docs.oracle.com/cd/E17076_02/html/api_reference/C/envset_lg_bsize.html\n"
    "#   http://docs.oracle.com/cd/E17076_02/html/api_reference/C/envset_lg_max.html\n"
    "#   http://docs.oracle.com/cd/E17076_02/html/programmer_reference/log_limits.html\n"
    "#\n"
    "# Increase the size of the in-memory log buffer from the default\n"
    "# of 32 Kbytes to 256 Kbytes.  Decrease the log file size from\n"
    "# 10 Mbytes to 1 Mbyte.  This will help reduce the amount of disk\n"
    "# space required for hot backups.  The size of the log file must be\n"
    "# at least four times the size of the in-memory log buffer.\n"
    "#\n"
    "# Note: Decreasing the in-memory buffer size below 256 Kbytes will hurt\n"
    "# hurt commit performance. For details, see:\n"
    "#\n"
    "#   http://svn.haxx.se/dev/archive-2002-02/0141.shtml\n"
    "#\n"
    "set_lg_bsize     262144\n"
    "set_lg_max      1048576\n"
    "#\n"
    "# If you see \"log region out of memory\" errors, bump lg_regionmax.\n"
    "# For more information, see:\n"
    "#\n"
    "#   http://docs.oracle.com/cd/E17076_02/html/programmer_reference/log_config.html\n"
    "#   http://svn.haxx.se/users/archive-2004-10/1000.shtml\n"
    "#\n"
    "set_lg_regionmax 131072\n"
    "#\n"

    "# The default cache size in BDB is only 256k. As explained in\n"
    "# http://svn.haxx.se/dev/archive-2004-12/0368.shtml, this is too\n"
    "# small for most applications. Bump this number if \"db_stat -m\"\n"
    "# shows too many cache misses.\n"
    "#\n"
    "set_cachesize    0 1048576 1\n";
  static const struct
  {
    int bdb_major;
    int bdb_minor;
    const char *config_key;
    const char *header;
    const char *inactive;
    const char *active;
  } VAR_11[] = {

    { 4, 0, 128,

      "#\n"
      "# Disable fsync of log files on transaction commit. Read the\n"
      "# documentation about DB_TXN_NOSYNC at:\n"
      "#\n"
      "#   http://docs.oracle.com/cd/E17076_02/html/programmer_reference/log_config.html\n"
      "#\n"
      "# [requires Berkeley DB 4.0]\n"
      "#\n",

      "#set_flags DB_TXN_NOSYNC\n",

      "set_flags DB_TXN_NOSYNC\n" },

    { 4, 2, 129,

      "#\n"
      "# Enable automatic removal of unused transaction log files.\n"
      "# Read the documentation about DB_LOG_AUTOREMOVE at:\n"
      "#\n"
      "#   http://docs.oracle.com/cd/E17076_02/html/programmer_reference/log_config.html\n"
      "#\n"
      "# [requires Berkeley DB 4.2]\n"
      "#\n",

      "#set_flags DB_LOG_AUTOREMOVE\n",

      "set_flags DB_LOG_AUTOREMOVE\n" },
  };
  static const int VAR_12 =
    sizeof(VAR_11)/sizeof(*VAR_11);


  FUNC_0(FUNC_6(&VAR_8, VAR_7,
                           VAR_2 | VAR_0, VAR_1,
                           VAR_6->pool));

  FUNC_0(FUNC_7(VAR_8, VAR_10,
                                 sizeof(VAR_10) - 1, ((void*)0),
                                 VAR_6->pool));


  for (VAR_9 = 0; VAR_9 < VAR_12; ++VAR_9)
    {
      void *VAR_13 = ((void*)0);
      const char *VAR_14;

      if (VAR_6->config)
        {
          VAR_13 = FUNC_4(VAR_6->config, VAR_11[VAR_9].config_key);
        }

      FUNC_0(FUNC_7(VAR_8,
                                     VAR_11[VAR_9].header,
                                     FUNC_2(VAR_11[VAR_9].header),
                                     ((void*)0), VAR_6->pool));

      if (((VAR_4 == VAR_11[VAR_9].bdb_major
            && VAR_5 >= VAR_11[VAR_9].bdb_minor)
           || VAR_4 > VAR_11[VAR_9].bdb_major)
          && VAR_13 != ((void*)0) && FUNC_1(VAR_13, "0") != 0)
        VAR_14 = VAR_11[VAR_9].active;
      else
        VAR_14 = VAR_11[VAR_9].inactive;

      FUNC_0(FUNC_7(VAR_8, VAR_14, FUNC_2(VAR_14),
                                     ((void*)0), VAR_6->pool));
    }

  return FUNC_5(VAR_8, VAR_6->pool);
}
